#include<string>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main() {
	vector<string> words;
	ifstream in("vectorjianjie2.cpp");
	string word;
	while (in >> word)//每次取输入的一个单词
	{
		words.push_back(word);
	}
	for (int i = 0; i < words.size(); i++)
	{
		cout << words[i] << endl;
	}
}