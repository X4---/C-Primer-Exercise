#include <iostream>
#include <string>

using namespace std;


int main()
{
	int i = 42;
	int *p1 = &i;

	*p1 = * p1 * * p1;

	// i = 42
	// p point to i
	// *p = 42 * 42;
	// i = 42 * 42;

	return 0;
}