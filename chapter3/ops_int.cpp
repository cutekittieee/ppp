// simple program to exercise operators

#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter a floating-point value: ";
	int n;
	cin >> n;

	cout << "n == " << n / 2 * 2 + n % 2
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << 2 * n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< '\n';	// name for newline ("end of line") in output

	return 0;
}
