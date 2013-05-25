#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

template <typename T>
T prod(T a, T b){ return a * b; }

#define PROD(a,b)(a*b)
#define DIV(b,c)(b / c)

using namespace std;

typedef int (*ifi)(int);

class Base
{
public:
	Base( int i = 42 )
		: i(i) { }
	virtual void out()
	{ cout << "Base: " << i << endl; }
protected:
	int i;
};
class Sub : public Base
{
public:
	Sub( int i = 21, int j = 53 )
		: j(j), Base(i) { }
	virtual void out()
	{ cout << "Sub: " << i << ", " << j << endl; }
protected:
	int j;
};
int main()
{
	Base* ap[5];
	ap[0] = new Sub( );
	ap[1] = new Sub( 3 );
	ap[2] = new Sub( 5, 6 );
	ap[3] = new Base();
	ap[4] = new Base( 8 );
	for( int i=0 ; i < 5 ; i++ )
		ap[i]->out();
	vector<Base> v(5);
	for( int i=0 ; i < 5 ; i++ )
		v[i] = *ap[i];
	for( int i=0 ; i < 5 ; i++ )
		v[i].out();

	system("pause");
	return 0;
}