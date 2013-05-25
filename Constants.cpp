#include "cstdio"
#include "cstdlib"

int main(int argv, char* argc[]){

	/* Reading from right to left and considering the star as 
	pointer to we could read any of the examples below as for example

	Point to char that is constant
	constant pointer to a char
	constant pointer to a constant short
	etc.

	*/

	// The const in front indicates that the string cannot be changed
	// constant String
	const char* constantString = "Hello";

	/* e.g.
	*p = 'b'; 
	does not compile */

	// The const after char indicates that the pointer cannot be changed
	// constant Pointer
	char* const constantPointer = "Hello";

	short s = 10;
	short st = 15;
	short* const pc = &s;
	short* pp = &st;
	short* pp2 = &s;
	*pc = 5;
	pp = pp2;
	// pc = pp; Not valid because the pointer pc is constant and cannot be changed
	printf("%d\n", *pc);


	// Constant pointer and constant value that points to
	short const * const cpcs = &s;
	const short * const cpcs2 = &s;
	// *cpcs = 2;
	// cpcs = cpcs2;
	system("pause");

	return 0;
}