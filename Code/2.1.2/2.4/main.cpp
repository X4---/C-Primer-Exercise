#include <iostream>

using namespace std;

int main()
{
	unsigned u = 10, u2 = 42;

	cout << "u : 10  u2 : 42" << endl;
	cout << "u2 - u " << u2 - u << endl;
	cout << "u - u2 " << u - u2 <<endl;

	int i = 10, i2 = 42;

	cout << "i : 10  i2 : 42" << endl;
	cout << "i2 - i " << i2 - i << endl;
	cout << "i - i2 " << i - i2 << endl;
	cout << "i - u " << i - u << endl;
	cout << "u - i " << u - i << endl;


	return 0;
}