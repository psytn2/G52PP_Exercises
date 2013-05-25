#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class MyFloat
{
public:
	// Constructors
	MyFloat( const char* szName, float f )
		: f(f), strName(szName) {}

	MyFloat( string strName, float f )
		: f(f), strName(strName) {}

	// Copy constructor
	MyFloat(const MyFloat& other) :
		f(other.f), strName(other.strName){}

	// Print details of myfloat
	void print()
	{
		cout << strName << " : " << f << endl;
	}

	// Conversion operators
	operator string(){ return strName;}
	operator float(){ return f;}

	// Non-member operator overload - friend can access private data
	friend MyFloat operator-(const MyFloat& lhs, const MyFloat& rhs);

	// Member operator
	MyFloat operator+ (const MyFloat& rhs) const;

private:
	float f;
	string strName;
};

// Non-member operator
MyFloat operator-(const MyFloat& lhs, const MyFloat& rhs){
	MyFloat temp(lhs.strName + "-" + rhs.strName, /* strName */
		lhs.f - rhs.f
		);
	return temp;
}

// Member operator
MyFloat MyFloat::operator+(const MyFloat& rhs) const {

	return MyFloat(this->strName + "-" + rhs.strName, this->f + rhs.f);
}

// Non-member operator
bool operator==(const std::string& lhs, const std::string& rhs){
	return 0 == strcmp(lhs.c_str(), rhs.c_str());
}


int main()
{
	MyFloat f1("f1", 1.1f);
	f1.print();
	MyFloat f2("f2", 3.3f);
	f2.print();

	string s(f1);
	cout << "s: " << s << endl;
	float f(f1);
	cout << "f: " << f << endl;
	float t(355.29f);
	cout << "t: " << t << endl << endl;

	MyFloat f3 = f1 - f2;
	f3.print();

	MyFloat f4 = f2 + f2;
	f4.print();

	// String comparison

	string str1( "Same" );
	string str2( "Same" );
	string str3( "Diff" );

	cout << endl << endl << "String comparison" << endl;
	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str3: " << str3 << endl;
	printf( "str1 and str2 are %s\n",
		(str1 == str2) ? "Same" : "Diff" );
	printf( "str1 and str3 are %s\n",
		(str1 == str3) ? "Same" : "Diff" );
	printf( "str2 and str3 are %s\n",
		(str2 == str3) ? "Same" : "Diff" );

	system("pause");
	return 0;
}