#include <iostream>
#include <cstdlib>
using namespace std;

// max of two values of the same type
template < typename T >
T mymax( T a, T b )
{ return a > b ? a : b; }

// min of two values of the same type
template < typename T>
T mymin( T a, T b)
{ return a >= b ? b : a; }

// cast the second input to the same as the first input and add the values
template < typename T1, typename T2>
T1 addcast(T1 a, T2 b){
	return a + static_cast<T1>(b);
}

int main()
{
	int i1 = 4, i2 = 14;
	int i3 = mymax( i1, i2 );
	cout << "mymax(" << i1 << ","
		<< 12 << ") = " << i3 << endl;

	float f1 = 2.2, f2 = 5.1;
	float f3 = mymax(f1, f2);
	float f4 = mymin(f1, f2);
	cout << "mymax(" << f1 << "," << f2 << ") = " << f3 << endl;
	cout << "mymin(" << f1 << "," << f2 << ") = " << f4 << endl;

	cout << "addcast(" << i1 << "," << f1 << ") = " << addcast(i1, f1) << endl;

	system("pause");
	return 0;
}