#include <iostream>
#include <string>

using namespace std;


int main()
{
	int i =0;

	//illegal wrong type
	//double * dp = &i;

	//illegal int * ip = &i;
	//int * ip = i;

	int *p = &i;

	return 0;
}