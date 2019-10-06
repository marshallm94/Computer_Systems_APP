#include "std_lib_facilities.h"

int main() {
	int user_input {0};
	cout << "Enter a number: ";
	cin >> user_input;

	int* p = &user_input;

	cout << "The number you entered, "
		 << user_input << " is stored at " << p << '\n';

	return 0;
}

