#include<iostream>
using namespace std;

void func(){
	cout << "func() called..." << endl;
}

int main(){
	//先定义后初始化
	void (*fp)();
	fp = func;
	(*fp)();
	//同时定义和初始化
	void (*fp2)() = func;
	(*fp2)();
}
