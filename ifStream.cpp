#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int main()
{

	ofstream file;
	// Open a file
	file.open("file.txt");
	// Write to file
	file << "Hello file\n" << 75;
	// Manually close file
	file.close();

	ifstream file2;
	char output[100];
	string str;
	int x;
	file2.open("file.txt");
	file2 >> output;
	file2 >> str;
	file2 >> x;
	file2.close();
	cout << output << endl;
	cout << str << endl;
	cout << x << endl;

	system("pause");
	return 0;
}