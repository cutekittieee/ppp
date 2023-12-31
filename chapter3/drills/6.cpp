// read and write a first name

#include "../../std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;
	string friend_name;
	char friend_sex = '0';
	int age = 0;

	cin >> first_name;
	cout << "Dear " << first_name << ",\n";
	cout << "\tHow are you? I am fine. I miss you. We have so many memories together we will never forget!\n";
	cout << "I was very worried since you mentioned that a member of your family has become ill.\n";
	cout << "Are they getting better? When are you going to return home to be able to visit them?\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << ", please ask him to call me.\n";
	else if (friend_sex == 'f')
		cout << "If you see " << friend_name << ", please ask her to call me.\n";
	cin >> age;
	if (age <= 0 || age >= 110)
		simple_error("you're kidding!");

	cout << "I hear you just had a birthday and you are "<< age <<" years old.\n";
	if (age < 12)
		cout << "Next year you will be " << age + 1 << ".\n";
	else if (age == 17)
		cout << "Next year you will be able to vote.\n";
	else if (age > 70)
		cout << "I hope you are enjoying retirement.\n";

	return 0;
}
