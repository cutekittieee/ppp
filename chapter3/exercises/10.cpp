#include "../../std_lib_facilities.h"

int main()
{
	string operation;
	double d1, d2;

	cout << "Please enter the name of the operation and two floating-point values: ";
	cin >> operation >> d1 >> d2;

	if (operation == "+" || operation == "plus")
	{
		cout << "The result is: " << d1 + d2 << "\n";
	}
	else if (operation == "-" || operation == "minus")
	{
		cout << "The result is: " << d1 - d2 << "\n";
	}
	else if (operation == "*" || operation == "mul")
	{
		cout << "The result is: " << d1 * d2 << "\n";
	}
	else if (operation == "/" || operation == "div")
	{
		cout << "The result is: " << d1 / d2 << "\n";
	}
	else
	{
		cout << "Unknown operation.\n";
	}
	
	return 0;
}
