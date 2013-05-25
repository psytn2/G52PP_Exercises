#include <cstdio>
#include <cstdlib>

int i = 1; // Global
struct Base
{
	int i;
	Base()
		: i(3)
	{}
};
struct Sub : public Base
{
	int i;
	Sub()
		: i(2)
	{}
	void modify()
	{
		int i = 7; // Local
		::i = 4; // Global
		Sub::i = 5; // Sub's i
		Base::i = 6; // Base's i
	}
};
int main()
{
	Sub s;
	printf( "%d %d %d\n",
		i, s.i, s.Base::i );
	s.modify();
	printf( "%d %d %d\n",
		i, s.i, s.Base::i );
	system("pause");
	return 0;
}