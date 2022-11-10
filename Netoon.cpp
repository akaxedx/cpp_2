#include<iostream>
#include<iomanip>
using namespace std;

double f(double x)
{
	/*自主修改部分*/
	if (x == 0.40)
		return 0.41075;
	if (x == 0.55)
		return 0.57815;
	if (x == 0.65)
		return 0.69675;
	if (x == 0.80)
		return 0.88811;
	if (x == 0.90)
		return 1.02652;
	if (x == 1.05)
		return 1.25382;
	return 0;
}

double sishewuru(double a)
{
	int m;
	if (a > 0)
	{
		a = a * 100000 + 0.5;
		m = a;
		a = m;
		a /= 100000;
	}
	if (a < 0)
	{
		a = a * 100000 - 0.5;
		m = a;
		a = m;
		a /= 100000;
	}
	if (a == 0)
		a = 0;
	return a;
}

int main() {
	double num[10][10] = {{0}};
	int n = 6;
	double x[10];
	/*自主修改部分*/
	x[1] = 0.40;
	x[2] = 0.55;
	x[3] = 0.65;
	x[4] = 0.80;
	x[5] = 0.90;
	x[6] = 1.05;
	for (int i = 1; i <= n; i++)
	{
		num[i][1] = f(x[i]);
		num[i][0] = x[i];
	}
	for (int i = 2; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			if (i == 2)
			{
				num[j][i] = (num[j][i - 1] - num[j - 1][i - 1]) / (num[j][0] - num[j - 1][0]);
				num[j][i] = sishewuru(num[j][i]);
			}
			else
			{
				num[j][i] = (num[j][i - 1] - num[j - 1][i - 1]) / (num[j][0] -num[j - i + 1][0]);
				num[j][i] = sishewuru(num[j][i]);
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << num[i][j]<<"\t";
		}
		cout << endl;
	}
	/*自主修改部分，可注释掉*/
	double p = 0.596;
	double rs =
		+num[1][1]
		+ num[2][2] * (p - x[1])
		+ num[3][3] * (p - x[1]) * (p - x[2])
		+ num[4][4] * (p - x[1]) * (p - x[2]) * (p - x[3])
		+ num[5][5] * (p - x[1]) * (p - x[2]) * (p - x[3]) * (p - x[4])
		+ num[6][6] * (p - x[1]) * (p - x[2]) * (p - x[3]) * (p - x[4]) * (p - x[5]);
	rs = sishewuru(rs);
	cout << "N" << n-1 << "(" << p << ") = " << rs << endl;
	double r = num[n][n] * (p - x[1]) * (p - x[2]) * (p - x[3]) * (p - x[4]) * (p - x[5]) > 0 ?
		num[n][n] * (p - x[1]) * (p - x[2]) * (p - x[3]) * (p - x[4]) * (p - x[5]) :
		-num[n][n] * (p - x[1]) * (p - x[2]) * (p - x[3]) * (p - x[4]) * (p - x[5]);
	cout << "R" << n - 1 << "(" << p << ") = " << fixed << setprecision(15) << r << endl;
}
