#include<iostream>
using namespace std;

int main() {
	cout << "a number in decimal:"
		<< dec << 15 << endl;
	cout << "in octal:" << oct << 15 << endl;//oct八进制
	cout << "in hex:" << hex << 15 << endl;//hex十六进制
	cout << "a floating-point number:"
		<< 3.14159 << endl;
	cout << "non-printing char(escape):"
		<< char(27) << endl;//27为空格的ASCII码
}