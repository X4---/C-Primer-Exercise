#include <iostream>
#include <typeinfo>

using namespace std;

int i = 42;
int main()
{
	int i = 10;
	int *p;

	p = &i;

	*p = 20;

	return 0;
}