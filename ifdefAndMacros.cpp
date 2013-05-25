#include "cstdio"
#include "cstdlib"
#define MAX_ROWS 5

#ifdef MAX_ROWS
#define MAX_ROWS 3
#endif

#ifndef MAX_COLUMNS
#define MAX_COLUMNS 5
#endif

// Macros

#define max(a,b) ((a >= b) ? a : b)
#define mul(a,b) (a * b)

int main(int argv, char* argc[]){
	for(int i = 0; i < MAX_ROWS; i++){
		printf("%d\n", i);
	}

	printf("Max rows : %d, Max columns : %d \n\n", MAX_ROWS, MAX_COLUMNS);
	printf("Max number is %d\n", max(9,200));
	printf("mult %d\n", mul(9,200));

	int x = 3;
	int y = 4;
	printf("%d times %d = %d\n", x, y, mul(++x,++y));
	printf("%d + %d = %d\n", x, y, max(x++,y++));
	system("pause");

	return 0;
}