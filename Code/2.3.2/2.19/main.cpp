#include <iostream>
#include <string>

using namespace std;


int main()
{
	int i = 10;

	int *p = &i;

	int &r = i;

	// p is a variable , has value;

	// r is a refe, machine code do the deref operate

	return 0;
}