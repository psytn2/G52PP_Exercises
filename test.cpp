#include "stdio.h"
#include "stdlib.h"
#include "iostream"
#include <cstring>

using namespace std;
double d = 1.1;
class C
{
public:
	C( double d = 2.3 )
		: d(d)
	{
		d += 1.2;
		cout << "inside constructor " << endl;
	}
	void out() const { cout << d << endl; }
private:
	double d;
};
void output1( const C& c )
{
	C* pc = const_cast<C*>(&c);
	pc->out();
}
void output2( const C& c )
{
	c.out();
}
int main()
{
	C c;
	output1( c );
	output2( c );
	cout << d << endl;
	system("PAUSE");
	return 0;
}