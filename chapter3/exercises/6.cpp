#include "../../std_lib_facilities.h"

int main()
{
	int val1, val2, val3;

	cout << "Please enter three integer values: ";
	cin >> val1 >> val2 >> val3;

	if (val1 <= val2 && val2 <= val3)
	{
		cout << val1 << " " << val2 << " " << val3 << "\n";
	}
	else if (val1 <= val3 && val3 <= val2)
	{
		cout << val1 << " " << val3 << " " << val2 << "\n";
	}
	else if (val2 <= val1 && val1 <= val3)
	{
		cout << val2 << " " << val1 << " " << val3 << "\n";
	}
	else if (val2 <= val3 && val3 <= val1)
	{
		cout << val2 << " " << val3 << " " << val1 << "\n";
	}
	else if (val3 <= val1 && val1 <= val2)
	{
		cout << val3 << " " << val1 << " " << val2 << "\n";
	}
	else if (val3 <= val2 && val2 <= val1)
	{
		cout << val3 << " " << val2 << " " << val1 << "\n";
	}

	return 0;
}
