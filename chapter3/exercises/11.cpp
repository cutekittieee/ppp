#include "../../std_lib_facilities.h"

int main()
{
	int pennies, nickels, dimes, quarters, half_dollars, dollars;
	int sum;
	
	cout << "Please enter the number of pennies you have: ";
	cin >> pennies;
	cout << "Please enter the number of nickels you have: ";
	cin >> nickels;
	cout << "Please enter the number of dimes you have: ";
	cin >> dimes;
	cout << "Please enter the number of quarters you have: ";
	cin >> quarters;
	cout << "Please enter the number of half dollars you have: ";
	cin >> half_dollars;
	cout << "Please enter the number of dollars you have: ";
	cin >> dollars;

	if (pennies == 1)
	{
		cout << "You have " << pennies << " penny.\n";
	}
	else if (pennies > 1)
	{
		cout << "You have " << pennies << " pennies.\n";
	}
	else
	{
		cout << "You entered a wrong amount of pennies.\n";
		pennies = 0;
	}

	if (nickels == 1)
	{
		cout << "You have " << nickels << " nickel.\n";
	}
	else if (nickels > 1)
	{
		cout << "You have " << nickels << " nickels.\n";
	}
	else
	{
		cout << "You entered a wrong amount of nickels.\n";
		nickels = 0;
	}

	if (dimes == 1)
	{
		cout << "You have " << dimes << " dime.\n";
	}
	else if (dimes > 1)
	{
		cout << "You have " << dimes << " dimes.\n";
	}
	else
	{
		cout << "You entered a wrong amount of dimes.\n";
		dimes = 0;
	}

	if (quarters == 1)
	{
		cout << "You have " << quarters << " quarter.\n";
	}
	else if (quarters > 1)
	{
		cout << "You have " << quarters << " quarters.\n";
	}
	else
	{
		cout << "You entered a wrong amount of quarters.\n";
		quarters = 0;
	}

	if (half_dollars == 1)
	{
		cout << "You have " << half_dollars << " half dollar.\n";
	}
	else if (half_dollars > 1)
	{
		cout << "You have " << half_dollars << " half dollars.\n";
	}
	else
	{
		cout << "You entered a wrong amount of half dollars.\n";
		half_dollars = 0;
	}

	if (dollars == 1)
	{
		cout << "You have " << dollars << " dollar.\n";
	}
	else if (dollars > 1)
	{
		cout << "You have " << dollars << " dollars.\n";
	}
	else
	{
		cout << "You entered a wrong amount of dollars.\n";
		dollars = 0;
	}
	
	sum = dollars * 100 + half_dollars * 50 + quarters * 25 + dimes * 10 + nickels * 5 + pennies;
	cout << "The value of all your coins is " << sum << " cents, which equals to $" << sum/100.0 << ".\n";

	return 0;
}
