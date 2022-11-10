#include<iostream>
using namespace std;

void func() {
	static int i = 0;
	cout << "i = " << ++i << endl;
}

int main() {
	for (int x = 0; x < 10; x++)
		func();
}
/*
:c03:FileStatic.cpp
static int fs;
int main(){
	fs = 1;
}
:c03:FileStatic2.cpp
extern int fs;
void func(){
	fs = 100;
}
即使这里使用了extern int 但连接器不会找到FileStatic.cpp中的fs因为它是静态的；
*/