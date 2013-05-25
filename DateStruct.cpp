#include "cstdio"
#include "cstdlib"

struct Date { int d, m, y; };

void bar(struct Date* pdob)
{
	//(*pdob).m = 3;
	pdob->m = 3;
}


int main( int argc, char* argv[] )
{
	struct Date dob = { 1, 4, 1990 };
	printf( "DOB: %02d/%02d/%04d\n",
		dob.d, dob.m, dob.y );
	dob.d = 2;

	Date initArrOfDatesOnStack[] = {
		{1,1,2001}, {2,2,2002}, {3,3,2003},
		{4,4,2004}, {5,5,2005} };
	for ( int i = 0 ; i < 5 ; i++ )
		printf(
		"initArrayOfDatesOnStack[%d] is : %02d/%02d/%04d\n",
		i, initArrOfDatesOnStack[i].d,
		initArrOfDatesOnStack[i].m,
		initArrOfDatesOnStack[i].y );

	printf("\n\nAdding 2 months to the first date\n");
	bar(&initArrOfDatesOnStack[0]);
	printf(
		"initArrayOfDatesOnStack[0] is : %02d/%02d/%04d \nAddress of the first value %p\n",
		initArrOfDatesOnStack[0].d,
		initArrOfDatesOnStack[0].m,
		initArrOfDatesOnStack[0].y, &initArrOfDatesOnStack[0] );

	system("PAUSE");
	return 0;
}