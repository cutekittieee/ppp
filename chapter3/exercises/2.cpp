// convert from miles to kilometers

#include "../../std_lib_facilities.h"

int main()
{
	double distance_m;
	double distance_km;

	cout << "Enter the distance to convert (in miles): ";
	cin >> distance_m;
	distance_km = distance_m * 1.609;
	cout << distance_m << " mile(s) is equivalent to " << distance_km << " kilometer(s).\n";

	return 0;
}
