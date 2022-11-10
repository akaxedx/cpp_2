#include<iostream>
using namespace std;

//本程序以另一个宏开始
//使用了一个被称为字符串化的与处理器特征
//表达式前使用#
//作用是获得任何一个表达式并将它转化为一个字符串数组
#define P(EX) cout << #EX << ":" << EX << endl;

int main(){
	int a[10];
	for(int i = 0; i < 10; i++)
		a[i] = i;
	int* ip = a;
	P(*ip);
	P(*++ip);
	P(*(ip + 5));
	int* ip2 = ip + 5;
	P(*ip2);
	P(*(ip2 - 4));
	P(*--ip2);
	P(ip2 - ip);
}
