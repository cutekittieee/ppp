#include "../../std_lib_facilities.h"

int main()
{
	string s1;

	cout << "Please enter a number as a string (zero, one, two, ...): ";
	cin >> s1;

	if (s1 == "zero")
	{
		cout << "The number you have entered is: 0\n";
	}
	else if (s1 == "one")
	{
		cout << "The number you have entered is: 1\n";
	}
	else if (s1 == "two")
	{
		cout << "The number you have entered is: 2\n";
	}
	else if (s1 == "three")
	{
		cout << "The number you have entered is: 3\n";
	}
	else if (s1 == "four")
	{
		cout << "The number you have entered is: 4\n";
	}
	else
	{
		cout << "not a number I know\n";
	}
	
	return 0;
}
