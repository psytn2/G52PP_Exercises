#include <iostream>
#include <cstdlib>
using namespace std;
class Base
{
public:
	virtual void foo() const { cout << "alpha" << endl; }
	void bar() const { cout << "beta" << endl; }
};
class Sub : public Base
{
public:
	void foo() const { cout << "gamma" << endl; }
    void bar() const { cout << "delta" << endl; }
};
class SubSub : public Sub
{
public:
	void foo() const { cout << "epsilon" << endl; }
	void bar() const { cout << "zeta" << endl; }
};
int main()
{
	Base b;
	Sub s;
	SubSub ss;
	Sub& r1 = ss;
	Base& r2 = ss;
	Base& r3 = s;
	Base* pBase[6] = { &ss, &s, &b, &r1, &r2, &r3 };
	for ( int i = 0 ; i < 6 ; i++ )
	{
		pBase[i]->foo();
		pBase[i]->bar();
	}
	system("pause");
	return 0;
}