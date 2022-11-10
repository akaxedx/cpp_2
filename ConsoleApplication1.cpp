#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
int main()
{
	int a[70]={0};
	int b[70]={0};
	int c[70]={0};
	int n;
	int d[70] = { 0 };
	scanf("%d", &n);
	int l;
	a[0] = 1;
	int x;
	int i;
	int j;
	int k;
	for (i = 1; i <= n; i++)
	{
		for (l = 0; l < 70; l++)
		{
			c[l] = 0;
		}
		b[0] = i % 10;
		b[1] = i / 10;

		for (j = 0; j < 70; j++)
		{
			for (k = 0; k < 70; k++)
			{
				c[j + k] += a[j] * b[k];
			}

		}
		for (l = 0; l < 70; l++)
		{
			if (c[l] >= 10) {
				c[l + 1] += c[l] / 10;
				c[l] = c[l] % 10;
			}
		}
		for (l = 0; l < 70; l++)
		{
			a[l] = c[l];
			d[l] += c[l];
		}
		for (l = 0; l < 70; l++)
		{
			if (d[l] >= 10) {
				d[l + 1] += d[l] / 10;
				d[l] = d[l] % 10;
			}
		}

	}
	int tx = 0;
	for (i = 69; i > 0; i--)
	{
		if (c[i] == 0) {
			continue;
		}
		break;
	}
	for (l = i; l >= 0; l--)
	{
		printf("%d", d[l]);
	}
	return 0;
}
