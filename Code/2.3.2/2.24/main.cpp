#include <iostream>
#include <string>

using namespace std;


int main()
{
	int i = 42;

	//legal  void * can point to any object
	void *p = &i;

	//illegal type mismatch
	//long * lp = &i ;

	return 0;
}