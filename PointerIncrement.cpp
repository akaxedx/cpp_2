#include<iostream>
using namespace std;

//指针算术，地址会根据指针类型分配不同的地址
//int*         每次++都会分配4字节
//而double*    每次会分配8字节
int main(){
	int i[10];
	double d[10];
	int* ip = i;
	double* dp = d;
	cout << "ip = " << (long)ip << endl;
	ip ++;
	cout << "ip = " << (long)ip << endl;
	cout << "dp = " << (long)dp << endl;
	dp++;
	cout << "dp = " << (long)dp << endl;
}
