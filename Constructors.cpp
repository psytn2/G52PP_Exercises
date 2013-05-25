#include <cstdio>
#include <cstdlib>

class Example
{
public:
	Example( int iVal = 1)
		: m_iVal(iVal) {}
	// WARNING – not exact copy!
	Example( const Example& rhs)
		: m_iVal(rhs.m_iVal+1)
	{ }
	void print()
	{
		printf("%d\n", m_iVal);
	}
private:
	int m_iVal;
};
int main()
{
	Example eg1;
	Example eg2(2);
	// Initialisation:
	Example eg3 = eg2;
	Example eg4;
	Example eg5 = eg3;
	// Assignment
	eg4 = eg2;
	eg1.print();
	eg2.print();
	eg3.print();
	eg4.print();
	eg5.print();

	system("pause");
	return 0;
}