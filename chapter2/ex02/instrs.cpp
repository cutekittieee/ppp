#include "../../std_lib_facilities.h"

int main() // C++ programs start by executing the function main
{
	cout << "Stand up if you are sitting.\n";
	cout << "Turn in the direction of the stairs.\n";
	cout << "Move to the stairs taking one step at a time.\n";
	cout << "Turn in the direction of the stairs leading to the first floor.\n";
	cout << "Move up the stairs taking one step at a time.\n";
	cout << "Turn right 90 degrees.\n";
	cout << "Move 2 meters ahead taking one step at a time.\n";
	cout << "If the door is closed, push down on the handle and pull.\n";
	cout << "Move 1 meter ahead.\n";
	keep_window_open();			// wait for a character to be entered
	return 0;
}
