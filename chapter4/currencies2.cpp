// convert from yen, yuan, krone, or pound to USD
// a suffix ‘y’, 'c', ‘k’, or 'p' indicates the currency of the input
// any other suffix is an error

#include "../../std_lib_facilities.h"

int main()
{
	constexpr double yen_to_usd = 0.00670827;		// Japanese Yen to USD conversion rate
	constexpr double yuan_to_usd = 0.138328;		// Chinese Yuan to USD conversion rate
	constexpr double kroner_to_usd = 0.0941977;		// Norwegian Krone to USD conversion rate
	constexpr double gbp_to_usd = 1.27358;			// British Pound to USD conversion rate

	double amount = 1;							// amount specified in yen(s), yuan(s), kroner(s), or pound(s).

	char unit = ' ';							// a space is not a unit

	cout << "Please enter the amount followed by a currency (y to yen, c to yuan, k to kroner, p to pounds):\n";
	cin >> amount >> unit;

	switch (unit)
	{
		case 'y':
			cout << amount << " yen(s) == " << yen_to_usd * amount << " USD\n";
			break;

		case 'c':
			cout << amount << " yuan(s) == " << yuan_to_usd * amount << " USD\n";
			break;
	
		case 'k':
			cout << amount << " kroner(s) == " << kroner_to_usd * amount << " USD\n";
			break;

		case 'p':
			cout << amount << " pound(s) == " << gbp_to_usd * amount << " USD\n";
			break;

		default:
			cout << "Unknown currency: " << unit << "\n";
			break;
	}

	return 0;
}
