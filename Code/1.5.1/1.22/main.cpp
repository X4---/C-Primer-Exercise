#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item a,b;

	cin >> a;
	while(cin >> b)
	{
		a +=b;
	}

	cout << b << endl;
	return 0;
}