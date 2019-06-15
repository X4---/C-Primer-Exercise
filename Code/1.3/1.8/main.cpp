#include <iostream>

using namespace std;

int main()
{
	cout << "/*";
	cout << "*/";

	
	//This One are illegal
	//cout << /* "*/" */;
	
	cout << /* "*/" /* "/*" */;

	return 0;
}