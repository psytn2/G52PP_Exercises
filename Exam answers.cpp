#include <iostream>

using namespace std;

int foo( int i )
{
	static int j = i + 1;
	j = j + i;
	return j;
}

struct S
{
	S( float f) : f(f) {}
	float f;
};

class C
{
	C( float f) : f(f) {}
	float f;
};

int i = 1;

int foo()
{
	int i = ++::i;
	cout << i << endl;
	i++;
	return i*i;
}

#define MULTIPLY(a, b) ( a * b)
#define MAX(a, b) (a > b ? a : b)

double multiply(double a, double b) { return (a * b) ; }

template < typename T >
T mult (T a, T b){ return a * b; }


int main()
{
	/*
	double a = 2.5f;
	double b = 3.2f;
	cout << mult(a, b) << endl;
	cout << multiply(a, b) << endl;
	cout << MULTIPLY(a, b) << endl;
	cout << MAX(a, b) << endl;

	// 1a
	S s1;
	C c1;
	S s2(1.0f);
	C c2(1.0f);
	cout << sizeof(S) << endl;
	cout << sizeof(C) << endl;

	// 1d
	// output eo World

	char str[] = "Hello World\n";
	char* p = str;
	while ( *p++ )
	if ( *p != 'l' )
	cout << *p;


	// 1e

	int i = 1;
	int& j = i;
	int k = i;
	for ( ; i < 10 ; i++, j++ )
	{
	k = k + j;
	cout << i << "," << j << "," << k << endl;
	}

	// 1f
	int i = 1;
	int j = 1;
	do
	{
	j = foo(++i);
	cout << i << "," << j << endl;
	} while( i < 4 );

	*/
	// 1g

	i++;
	for ( int i = 0 ; i < 6 ; i++ )
	{
		int b = foo();
		cout << b << endl;
	}

	system("pause");
	return 0;

}