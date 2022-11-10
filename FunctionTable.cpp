#include<iostream>
using namespace std;

#define DF(N) void N(){cout << "function " #N " called..." << endl;}
DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

void (*func_table[])() = { a, b, c, d, e, f, g};
//创建一个指向函数的指针数组
//[0]指向a函数
//[1]指向b函数
//...
int main(){
	while(1){
		cout << "press a key from 'a' to 'g' "
		"or q to quit" << endl;
		char c, cr;
		cin.get(c); cin.get(cr);
		if( c == 'q')
			break;
		if(c < 'a' || c > 'g')
			continue;
		(*func_table[c - 'a'])();
	}
}

