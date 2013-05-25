#include "stdio.h"
#include "stdlib.h"
#include "iostream"

typedef int (*fptr) (int);
typedef int (*fptr2) (int);

int f1(int i) {return i+1; }
int f2(int i) {return i-2; }
int f3() { printf( "f3(); " ); return 3; }
int f4() { printf( "f4(); " ); return 4; }

int main()
{

	int (*g3)() = NULL;
	int (*g4)() = NULL;
	printf("\nTest 4: \n" );
	g3 = &f3;
	g4 = &f4;
	printf( "Result = %d\n", g3() );
	printf( "Result = %d\n", g4() );
	fptr f = &f1;
	
	printf("Function pointer f1(g3) : %d \n", f(g3()));

	fptr2 fArray[2];
	fArray[0] = &f1;
	fArray[1] = &f2;
	printf("\nArray of function pointers\nf1(g4) = %d\nf2(g4) = %d\n\n", fArray[0](g4()), fArray[1](g4()));
	system("pause");
	return 0;
}