#include<string>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
/*��ÿ�ж���һ��string�������ڲ�֪����Ҫ��Ŷ����У�
ֻ���ڶ��������ļ������֪��string����������������
����Ҫ�����������󡪡�vector����vector������Ч���
��ͬ���࣬vector<ĳ������>����ȷ����ŵ�����
*/
int main() {
	vector<string> v;//����һ�����string���������
	ifstream in("vectordejianjie.cpp");
	string line;
	while (getline(in,line))
	{
		v.push_back(line);//������β������һ��string����
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << i << ": " << v[i] << endl;//���ȡ������ķ�������������
	}
}