#include<iostream>
using namespace std;

#define PRINT(STR,VAR)\
cout<<STR" = "<<VAR<<endl//���ں�����������еĲ����ᱻ�����ź�������д�������������Բ������κ����ͼ��

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