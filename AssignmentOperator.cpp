#include <cstdio>
#include <cstdlib>

class Example
{
public:
	Example( int iVal = 1)
		: m_iVal(iVal) {}
	Example& operator=(
		const Example& rhs)
	{
		m_iVal = rhs.m_iVal + 10;
		return *this;
	}
	void print()
	{ printf("%d\n", m_iVal); }
private:
	int m_iVal;
};
int main()
{
	Example eg5(4);
	Example eg6(5);
	Example eg7(6);
	// Assignment
	eg7 = eg6 = eg5;
	printf("\neg5 = ");
	eg5.print();
	printf("\neg6 = ");
	eg6.print();
	printf("\neg7 = ");
	eg7.print();

	system("pause");
	return 0;
}