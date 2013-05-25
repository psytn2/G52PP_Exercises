#include "cstdio"
#include "cstdlib"
#include "iostream"

#include <cstdio>

class Friendly;
class TheFriend
{
public:
	void DoSomething(
		Friendly& dest,
		const Friendly& source);
};

class Friendly
{
	friend class TheFriend;
public:
	friend void FriendFunc(
		const char* message,
		const Friendly& thing );

	Friendly( int i = 4 )
		: _i(i) { }
private:
	int _i;
};

void FriendFunc(
	const char* message,
	const Friendly& thing )
{ // Access _i member
	printf( "%s : _i = %d\n",
		message, thing._i );
}

void
	TheFriend::DoSomething(
	Friendly& dest,
	const Friendly& source )
{
	dest._i =
		source._i + 1;
}
int main()
{
	Friendly d1(2), d2;
	TheFriend f;
	f.DoSomething( d2, d1);

	FriendFunc("d1", d1);
	FriendFunc("d2", d2);
	system("pause");
	return 0;
}