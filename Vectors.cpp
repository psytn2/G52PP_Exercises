#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<char> v(10);
	// 10 elements
	int size = v.size();
	cout << "Size " << size
		<< endl;
	// Set each value

	for( int i=0 ; i < size ; i++ )
		v[i] = i;

	// Iterate through vector
	vector<char>::iterator p
		= v.begin();

	for( ; p != v.end() ; p++ )
		*p += 97;

	// Output the contents
	for( int i=0 ; i < size ; i++ )
		cout << v[i] << endl;

	system("pause");
	return 0;
}