#include "stdio.h"
#include "stdlib.h"
#include "iostream"

class BaseClass
{
public:
	char* foo() { return "BaseFoo"; } // if we put virtual in front, we override the function with the subclass version when baseclass pointer calls
	char* bar() { return "BaseBar"; }
};

class SubClass : public BaseClass
{
public:
	char* foo() { return "SubFoo"; }
	// No override for bar()
};
int main()
{
	SubClass* pSub = new SubClass;
	BaseClass* bClass = new SubClass;
	printf("SubClass pointer foo=%s bar=%s\n", pSub->foo(), pSub->bar() );
	printf("BaseClass Pointer foo=%s bar=%s\n", bClass->foo(), bClass->bar() );
	delete pSub;
	delete bClass;

	system("pause");
	return 0;
}