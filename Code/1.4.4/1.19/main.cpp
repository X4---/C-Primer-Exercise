#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	cin >> a;
	cin >> b;

	if ( a < b)
	{
		while(a <= b)
		{
			cout << a << endl;
			++a;
		}
	}else
	{
		while( b <= a)
		{
			cout << b << endl;
			++b;
		}
	}

	return 0;
}