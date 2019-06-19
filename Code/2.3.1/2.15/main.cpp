#include <iostream>
#include <typeinfo>

using namespace std;

int i = 42;
int main()
{
	int ival = 1.01;
	
	//illegal  ref bind to literal
	//int &rval1 = 1.01;
	
	int &rval2 = ival;

	//illegal ref must ini
	//int &rval3;

	return 0;
}