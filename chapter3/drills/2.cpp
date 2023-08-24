// read and write a first name

#include "../../std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n";
	cout << "\tHow are you? I am fine. I miss you. We have so many memories together we will never forget!\n";
	cout << "I was very worried since you mentioned that a member of your family has become ill.\n";
	cout << "Are they getting better? When are you going to return home to be able to visit them?\n";
	
	return 0;
}
