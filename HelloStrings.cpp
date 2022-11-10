#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2;//空字符串
	string s3 = "Hellow,World";//初始化
	string s4("I am");//也是初始化
	s2 = "Today";//赋值
	s1 = s3 + " " + s4;//合并拼接
	s1 += " 8 ";//字符串拼接
	cout << s1 + s2 + "!" << endl;
}