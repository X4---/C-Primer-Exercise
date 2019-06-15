#include <iostream>

using namespace std;

int main()
{
	int index = 10;
	int sum = 0;

	while(index >= 0)
	{
		sum += index;
		--index;
	}

	cout << "The sum form 10 to 0 is " << sum << endl;

	return 0;
}