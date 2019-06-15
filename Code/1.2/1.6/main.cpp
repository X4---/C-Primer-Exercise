#include <iostream>

//using namespace std;

int main()
{
	std::cout << "Input two number" << std::endl;

	int v1;
	int v2;
	std::cin >> v1;
	std::cin >> v2;

	std::cout << "The sum of " << v1
		<< " and " << v2
		<< " is " << v1 + v2 << std::endl;

	//The code in book is not legal,
	//The statement of  cout <<   return cout object 
	//The '; in the end break the statement'

	/*std::cout << "The sum of " << v1;
		<< " and" << v2;
		<< " is" << v1 + v2 << std::endl;*/


	return 0;
}