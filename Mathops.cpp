#include<iostream>
using namespace std;

#define PRINT(STR,VAR)\
cout<<STR" = "<<VAR<<endl//跟在宏名后的括号中的参数会被闭括号后面的所有代码替代。它不对参数做任何类型检查

int main() {
	int i, j, k;
	float u, v, w;
	cout << "enter an integer: ";
	cin >> j;
	cout << "enter another integer: ";
	cin >> k;
	PRINT("j", j);PRINT("k", k);
	i = j + k; PRINT("j + k", i);
	i = j - k; PRINT("j - k", i);
	i = k / j; PRINT("k / j", i);
	i = k * j; PRINT("k * j", i);
	i = k % j; PRINT("k % j", i);
	j %= k; PRINT("j %= k", j);
}