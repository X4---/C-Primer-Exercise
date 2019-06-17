#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item cur, val;
	if (std::cin >> cur)
	{
		while (cin >> val)
		{
			if (val.isbn() == cur.isbn())
			{
				cur = cur + val;
			}
			else
			{
				cout << cur << endl;
				cur = val;
			}
		}
		cout << cur << endl;
	}


	return 0;
}