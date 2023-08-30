#include "../../std_lib_facilities.h"

int main()
{
	double val1, val2;

	cout << "Please enter two floating-point values: ";
	cin >> val1 >> val2;

	if (val1 < val2)
	{
		cout << val1 << " is smaller than " << val2 << ".\n";
		cout << val2 << " is larger than " << val1 << ".\n";
	}
	else if (val1 > val2)
	{
		cout << val2 << " is smaller than " << val1 << ".\n";
		cout << val1 << " is larger than " << val2 << ".\n";
	}
	else
		cout << "The two numbers (" << val1 << ") are equal.\n";

	cout << "Sum: " << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
	cout << "Difference: " << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
	cout << "Product: " << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
	cout << "Ratio: " << val1 << " / " << val2 << " = " << val1 / val2 << "\n";

	return 0;
}
