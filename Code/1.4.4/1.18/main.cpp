#include <iostream>

using namespace std;

int main()
{
	int sum =0;
	for(int value =0;  cin >> value; )
	{
		sum += value;
	}
	cout << "Sum is " << sum << endl;
	return 0;
}