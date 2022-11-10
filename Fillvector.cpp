#include<string>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
/*若每行读入一个string对象，由于不知道需要存放多少行，
只有在读完整个文件后才能知道string对象的数量，因此我
们需要“容器”对象——vector对象，vector可以有效存放
不同的类，vector<某个类名>即可确定存放的类型
*/
int main() {
	vector<string> v;//生成一个存放string对象的容器
	ifstream in("vectordejianjie.cpp");
	string line;
	while (getline(in,line))
	{
		v.push_back(line);//在容器尾部插入一个string对象
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << i << ": " << v[i] << endl;//最后取出对象的方法类似于数组
	}
}