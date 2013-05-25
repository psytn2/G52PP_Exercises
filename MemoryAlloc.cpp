#include "cstdio"
#include "cstdlib"

int main(int argv, char* argc[]){
	int* pInt = (int*)malloc( sizeof(int) );
	printf("Size of pInt %d\n", sizeof(pInt));
	*pInt = 5;
	printf("%d\n", *pInt);
	(*pInt)++;
	*pInt += 12;
	printf("%d\n", *pInt);
	free( pInt );

	int iSize = 6;
	int* parray = (int*)malloc(
		iSize * sizeof(int) );
	*parray = 3; /* Index 0 */
	parray[5] = 5;
	printf("Size of pArray %d\n", sizeof(parray));
	printf("%d\n", parray[5]);
	free( parray );
	system("pause");

	return 0;
}