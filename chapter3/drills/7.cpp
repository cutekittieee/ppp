// read and write a first name

#include "../../std_lib_facilities.h"

int main()
{
	string first_name;
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;

	string friend_name;
	cout << "Enter your friend's name: ";
	cin >> friend_name;

	char friend_sex = '0';
	cout << "Enter your friend's gender (f=female, m=male): ";
	cin >> friend_sex;

	int age = 0;
	cout << "Enter the age of the person you want to write to: ";
	cin >> age;

	if (age <= 0 || age >= 110)
		simple_error("you're kidding!");

	cout << "Dear " << first_name << ",\n";
	cout << "\tHow are you? I am fine. I miss you. We have so many memories together we will never forget!\n";
	cout << "I was very worried since you mentioned that a member of your family has become ill.\n";
	cout << "Are they getting better? When are you going to return home to be able to visit them?\n";

	cout << "\tHave you seen " << friend_name << " lately? ";
	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << ", please ask him to call me. He's one of my best friends.\n";
		cout << "I haven't met him for ages. I also miss his family.\n";
	}

	else if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << ", please ask her to call me. She's one of my best friends.\n";
		cout << "I haven't met her for ages. I also miss her family.\n";
	}
	
	cout << "\tI hear you just had a birthday and you are "<< age <<" years old. ";
	if (age < 12)
		cout << "Next year you will be " << age + 1 << ".\n";
	else if (age == 17)
		cout << "Next year you will be able to vote.\n";
	else if (age > 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "I hope you have a lovely birthday cake.\n";

	cout << "\n\nYours sincerely,\n\n\nCutekittieee\n";

	return 0;
}
