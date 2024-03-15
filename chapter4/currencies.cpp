// convert from yen, krone, or pound to USD
// a suffix ‘y’, ‘k’, or 'p' indicates the currency of the input
// any other suffix is an error

#include "../../std_lib_facilities.h"

int main()
{
	constexpr double yen_to_usd = 0.00670827;		// Japanese Yen to USD conversion rate
	constexpr double kroner_to_usd = 0.0941977;		// Norwegian Krone to USD conversion rate
	constexpr double gbp_to_usd = 1.27358;			// British Pound to USD conversion rate
	
	double amount = 1;							// amount specified in yen(s), kroner(s), or pound(s).

	char unit = ' ';							// a space is not a unit

	cout << "Please enter the amount followed by a currency (y to yen, k to kroner, p to pounds):\n";
	cin >> amount >> unit;

	if (unit == 'y')
	{
		cout << amount << " yen(s) == " << yen_to_usd * amount << " USD\n";
	}
	else if (unit == 'k')
	{
		cout << amount << " kroner(s) == " << kroner_to_usd * amount << " USD\n";
	}
	else if (unit == 'p')
	{
		cout << amount << " pound(s) == " << gbp_to_usd * amount << " USD\n";
	}
	else
	{
		cout << "Unknown currency: " << unit << "\n";
	}

	return 0;
}
