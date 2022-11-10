#include<iostream>
using namespace std;

union Packed
{
	char i;
	short j;
	int k;
	long l;
	float f;
	double d;
};

int main() {
	cout << "sizeof(Packed) = "
		<< sizeof(Packed) << endl;
	Packed x;
	x.i = 'c';
	cout << x.i << endl;
	x.k = 65;
	cout << x.k << endl;
	cout << x.i << endl;
}

