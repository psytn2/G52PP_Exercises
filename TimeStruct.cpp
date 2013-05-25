#include "cstdio"
#include "cstdlib"
#pragma pack(1)

struct time { int hour, minute, second; };
typedef struct TIME  {int hour, minute, second; } Time;

struct DateTime {
	char day;
	int time;
	
	char month;
	short year;
};

typedef struct DATETIME {
	int time;
	char day;
	char month;
	short year;
} DATETIME;


int main(int argc, char* argv[]){

	struct time t;
	t.hour = 12;
	t.minute = 34;
	t.second = 14;
	printf( "The time is %02d:%02d:%02d\n",
		t.hour, t.minute, t.second );

	struct time* pt = &t;
	pt->hour = 11; /* = (*pt).hour */
	pt->minute = 13; /* = (*pt).minute */
	pt->second = 5; /* = (*pt).second */
	printf( "The time is %02d:%02d:%02d\n",
		(*pt).hour, (*pt).minute, (*pt).second );

	Time tTime;
	tTime.hour = 1;
	tTime.minute = 12;
	tTime.second = 39;

	Time* ptTime = &tTime;
	printf( "\nTypeDef\nThe time is %02d:%02d:%02d\n",
		(*ptTime).hour, (*ptTime).minute, (*ptTime).second );

	struct DateTime dt;
	dt.time = 900;
	dt.day = 15;
	dt.month = 2;
	dt.year = 2013;
	printf( "\DateTime\nThe date and time is %02d:%02d:%02d %d\n\n\n",
		dt.day, dt.month, dt.year, dt.time );

	printf( "Address of dt = %p, size %d\n",
		&dt, sizeof(dt) );
	printf( "Address of dt.time = %p, size %d\n",
		&(dt.time), sizeof(dt.time) );
	printf( "Address of dt.day = %p, size %d\n",
		&(dt.day), sizeof(dt.day) );
	printf( "Address of dt.month = %p, size %d\n",
		&(dt.month), sizeof(dt.month) );
	printf( "Address of dt.year = %p, size %d\n",
		&(dt.year), sizeof(dt.year) );

	system("pause");
}