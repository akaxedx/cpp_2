#include<iostream>
using namespace std;

//把变量和表达式变为字符串，使用标准C字符串化运算符'#'

#define P(A) cout << #A << ": " << (A) << endl;

int main(){
	int a = 1, b = 2, c = 3;
	P(a); P(b); P(c);
	P(a + b);
	P((c - a)/b);
}
