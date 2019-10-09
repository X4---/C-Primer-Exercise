#include <iostream>

using namespace std;

int main()
{
	int i = 0, &r = i;

	auto a = r;							// a is int   

	const int ci = i, &cr = ci;

	auto b = ci;						// b is int  top-level const is ignored
	auto c = cr;						// c is int
	auto d = &i;						// d is int *
	auto e = &ci;						// e is const int *

	const auto f = ci;

	auto &g = ci;						// g is const int &
	//auto &h = 42;						// error  
	const auto &j = 42;					// j is literal    const int &

	a = 42;
	b = 42;
	c = 42;
	//d = 42;
	//e = 42;
	//g = 42;

	return 0;
}