#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2;//���ַ���
	string s3 = "Hellow,World";//��ʼ��
	string s4("I am");//Ҳ�ǳ�ʼ��
	s2 = "Today";//��ֵ
	s1 = s3 + " " + s4;//�ϲ�ƴ��
	s1 += " 8 ";//�ַ���ƴ��
	cout << s1 + s2 + "!" << endl;
}