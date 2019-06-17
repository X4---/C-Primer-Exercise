#include <iostream>
#include <typeinfo>

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
	auto a = Name<>('a');
	auto La = Name<>(L'a');
	auto s = Name<>("a");
	auto Ls = Name<>(L"a");

	cout << a << endl;
	cout << La << endl;
	cout << s << endl;
	cout << Ls << endl;

	auto i = Name(10);
	auto ui = Name(10u);
	auto uL = Name(10L);
	auto ii = Name(012);
	auto iii = Name(0xC);

	cout << i << endl;
	cout << ui << endl;
	cout << uL << endl;
	cout << ii << endl;
	cout << iii << endl;

	auto d = Name(3.14);
	auto f = Name(3.14f);
	auto ld = Name(3.14L);

	cout << d << endl;
	cout << f << endl;
	cout << ld << endl;

	auto i_10 = Name(10);
	auto ui_10 = Name(10u);
	auto d_10 = Name(10.);
	auto d_102 = Name(10e-2);

	cout << i_10 << endl;
	cout << ui_10 << endl;
	cout << d_10 << endl;
	cout << d_102 << endl;

	return 0;
}