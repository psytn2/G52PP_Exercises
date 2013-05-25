#include <cstdio>
#include "cstdlib"
struct A { int i; char c; };
union B { int i; char c; };

#pragma pack(1)
struct C { int i; char c; };
union D { int i; char c; };
int main( int argc, char** argv )
{

	printf( "sizeof(char): %d\n", sizeof(char) );
	printf( "sizeof(int): %d\n", sizeof(int) );
	printf( "sizeof(struct A): %d\n", sizeof(A) );
	printf( "sizeof(union B): %d\n", sizeof(B) );
	printf( "sizeof(struct C): %d\n", sizeof(C) );
	printf( "sizeof(union D): %d\n", sizeof(D) );

	system("pause");
	return 0;
}