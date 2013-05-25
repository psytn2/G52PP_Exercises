#include <cstdio>
#include <cstdlib>

class BaseClass {
public:
	virtual char* bar() { return "BaseBar"; }
	char* bar2() { return this->bar(); }
};
class SubClass : public BaseClass {
public:
	char* bar() { return "SubBar "; }
};
int main()
{
	BaseClass* pBase = new BaseClass; // No function bar from subclass is added
	SubClass* pSub = new SubClass;
	BaseClass* pSubAsBase = pSub; // Overrides function bar from the subclass
	printf( "bar B=%s S=%s SaB=%s\n",
		pBase->bar(), pSub->bar(), pSubAsBase->bar() );
	printf( "bar2 B=%s S=%s SaB=%s\n",
		pBase->bar2(), pSub->bar2(), pSubAsBase->bar2() );
	delete pBase; delete pSub;
	system("pause");
	return 0;
}