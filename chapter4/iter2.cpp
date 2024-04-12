// print a table of characters 'a'-'z'

#include "../../std_lib_facilities.h"

int main()
{
	char c = 'a';	// start from 'a'

	while (c <= 'z')
	{
		cout << c << '\t' << int(c) << '\n';
		++c;	// increment c (that is, c becomes c+1)
	}

	return 0;
}
