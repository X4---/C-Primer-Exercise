#include <iostream>

using namespace std;

template<typename T>
char * Name(T)
{
	return "";
}

template<>
char * Name(char)
{
	return "char";
}

template<>
char* Name(wchar_t)
{
	return "wchar_t";
}

template<>
char* Name(char*)
{
	return "char *";
}

template<>
char* Name(char[])
{
	return "char []";
}

template<>
char* Name(wchar_t*)
{
	return "wchar_t";
}

template<>
char* Name(wchar_t[])
{
	return "wchar_t []";
}



template<>
char * Name(int)
{
	return "int";
}

template<>
char * Name(unsigned)
{
	return "unsigned";
}

template<>
char * Name(long)
{
	return "long";
}

template<>
char * Name(unsigned long)
{
	return "unsigned long";
}

template<>
char * Name(float)
{
	return "float";
}

template<>
char * Name(double)
{
	return "double";
}

template<>
char * Name(long double)
{
	return "long double";
}
int main()
{
	cout << "Who goes with F\145rgus?\012" << endl;

	auto ld = Name(3.14e1L);
	auto ldf = Name(3.14L);

	//not illegal
	//auto f = Name(1024f);

	cout << ld << endl;
	cout << ldf << endl;

	return 0;
}