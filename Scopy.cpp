#include<string>
#include<fstream>
#include<iostream>
using namespace std;

int main() {
	/*д??txt?ļ?*/
	ifstream in("Scopy.cpp");
	ofstream out("Scopy.txt");
	string s;
	while (getline(in,s))//???ж?ȡ?ַ????????з??˳?
	{
		out << s << "\n";//д?뻻?з?
	}
	/*д???ַ???*/
	ifstream in2("Scopy.cpp");
	string s2, line;
	while (getline(in2,line))
	{
		s2 += line + "\n";
	}
	cout << s2;
}