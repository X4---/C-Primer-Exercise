#include <iostream>

using namespace std;

int main()
{
	int sum = 0;

	for (int i = 50; i <= 100; ++i)
	{
		sum += i;
	}

	cout << "Sum from 50 to 100 is " << sum << endl;
	sum = 0;
	for (int i = 10; i >= 0; --i)
	{
		sum += i;
	}
	cout << "Sum from 10 to 0 is " << sum << endl;
	sum = 0;
	
	int l;
	int r;
	cin >> l;
	cin >> r;

	if (r > l)
	{
		for (int i = l; i <= r; ++i)
		{
			cout << i << endl;
		}
	}
	else
	{
		for (int i = r; i <= l; ++i)
		{
			cout << i << endl;
		}
	}

	return 0;
}