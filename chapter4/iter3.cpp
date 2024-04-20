// print a table of characters: 'a'-'z', 'A'-'Z', '0'-'9'

#include "../../std_lib_facilities.h"

int main()
{
	for (char c = 'a'; c <= 'z'; ++c)
	{
		cout << c << '\t' << int(c) << '\n';		
	}
	cout << '\n';

	for (char c = 'A'; c <= 'Z'; ++c)
	{
		cout << c << '\t' << int(c) << '\n';
	}
	cout << '\n';

	for (char c = '0'; c <= '9'; ++c)
	{
		cout << c << '\t' << int(c) << '\n';
	}

	return 0;
}
