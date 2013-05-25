#include <cstdio>
#include <cstdlib>

typedef struct EMPLOYEE
{
	void** vtable;
	char strName[64];
	int iEmployeeID;
} Employee;

char* vGetManagerTypeName()
{ return "Manager"; }
char* vGetEmployeeTypeName()
{ return "Employee"; }
char* vGetDirectorTypeName()
{ return "Director"; }

char* vGetName(Employee* e){
	return e->strName;
}

int vGetEmployeeID(Employee* e){
	return e->iEmployeeID;
}

void* pEmployeeFunctions[3] =
{
	&vGetEmployeeTypeName,
	&vGetName,
	&vGetEmployeeID
};

int main(){

	// Create the structs
	Employee e1 = { pEmployeeFunctions, "Employee 1", 1 };
	Employee e2 = { pEmployeeFunctions, "Employee 2", 2 };


	system("pause");
	return 0;
}