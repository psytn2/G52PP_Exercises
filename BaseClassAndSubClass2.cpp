#include "stdio.h"
#include "stdlib.h"
#include "iostream"

class BaseClass
{
public: 
	char* foo() { return "BaseFoo"; }
	virtual char* bar() { return "BaseBar"; }
};

class SubClass : public BaseClass
{
public: 
	char* foo() { return "SubFoo"; }
	virtual char* bar() { return "SubBar "; }
};

int main()
{
	SubClass* pSub = new SubClass;
	BaseClass* pSubAsBase = pSub;
	printf( "pSubAsBase->foo() %s\n", pSubAsBase->foo() );
	printf( "pSubAsBase->bar() %s\n", pSubAsBase->bar() );
	delete pSub;
	system("pause");
	return 0;
}