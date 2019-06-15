#include <iostream>

using namespace std;

int main()
{
	int sum =0;

	for(int i = -100; i <= 100; ++i)
	{
		sum += i;
	}

	cout << "The sum form -100 to 100 is " << sum << endl;

	return 0;
}