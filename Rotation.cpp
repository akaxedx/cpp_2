#include<iostream>
using namespace std;

unsigned char rol(unsigned int val) {
	int highbit = 1;
	if (val & 0x80)
		highbit = 1;
	else
		highbit = 0;
	val <<= 1;
	val |= highbit;
	return val;
}
unsigned char ror(unsigned int val) {
	int lowbit;
	if (val & 1)
		lowbit = 1;
	else
		lowbit = 0;
	val >>= 1;
	val |= (lowbit << 7);
	return val;
}
int main() {
	unsigned int a,b;
	a = 89;
	cout << "a = " << a << endl;
	b = rol(a);
	cout << "rol(a) = " << b << endl;
	b = ror(a);
	cout << "ror(a) = " << b << endl;
} 