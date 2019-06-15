#include <iostream>

using namespace std;

int main()
{
	int index = 50;
	int sum = 0;

	while(index <= 100)
	{
		sum += index;
		++index;
	}

	cout << "The sum form 50 to 100 is " << sum << endl;

	return 0;
}