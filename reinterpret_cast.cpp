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
	print(&x);//����Xδ��ʼ�������е�ַ��������
	int* xp = reinterpret_cast<int*>(&x);//��X*���͵�&xת��Ϊint*
	for (int* i = xp; i < xp + sz; i++) {//��int*���͵�xp���г�ʼ����ʵ����int*���͵�x
		*i = 0;
	}
	print(reinterpret_cast<X*>(xp));//��xp����ת��ΪX*����x����ת��ΪX*,��ɳ�ʼ��
	print(&x);
}