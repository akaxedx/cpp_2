#include<iostream>
using namespace std;
const int sz = 10;

struct X
{
	int a[sz];
};

void print(X* x)
{
	for (int i = 0; i < sz; i++) {
		cout << x->a[i] << ' ';
	}
	cout << endl << "-------------------" << endl;
}

int main() {
	X x;
	print(&x);//发现X未初始化，所有地址都是乱码
	int* xp = reinterpret_cast<int*>(&x);//将X*类型的&x转化为int*
	for (int* i = xp; i < xp + sz; i++) {//对int*类型的xp进行初始化，实际是int*类型的x
		*i = 0;
	}
	print(reinterpret_cast<X*>(xp));//将xp重新转化为X*，即x重新转化为X*,完成初始化
	print(&x);
}