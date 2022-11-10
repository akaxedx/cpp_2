#include<iostream>
using namespace std;
int main() {
	cout << "sizeof(double) = " << sizeof(double);
	cout << ", sizeof(char) = " << sizeof(char);
	int x;
	int i = sizeof x;
	cout << ", int x;int i = sizeof x;i = " << i << endl;
}