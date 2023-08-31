#include "../../std_lib_facilities.h"

int main()
{
	int i1;

	cout << "Please enter an integer value: ";
	cin >> i1;

	if (i1 % 2 == 0)
	{
		cout << i1 << " is even.\n";
	}
	else
	{
		cout << i1 << " is odd.\n";
	}
	
	return 0;
}
