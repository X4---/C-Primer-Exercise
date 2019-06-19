#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	//illegal
	//std::cin >> int input_value;

	//illegal
	//int i = {3.14};
	long double ld = 3.14;

	//illegal
	//int ii = {ld};

	//legal
	double wage;
	double salary = wage = 9999.99;

	//legal
	int i = 3.14;

	return 0;
}