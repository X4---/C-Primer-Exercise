#include <iostream>
#include <typeinfo>

using namespace std;

int i = 42;
int main()
{
	int i = 100;
	int j = i;

	cout << i << endl;
	cout << j << endl;

	return 0;
}