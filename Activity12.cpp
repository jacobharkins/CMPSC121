//File:      P:\cmpsc121\experiments\exp02.cpp
//Purpose: 	Division modulo division.
/********************************************************************\
* Academic Integrity Affidavit:                                      *                                                                                                                                                     *                                                                    *
* I certify that, this program code is my work.  Others may have     *
* assisted me with planning and concepts, but the code was written,  *
* solely, by me.                                                     *                                                                                                                                                                                                                                                                                                                       *                                                                    *
* I understand that submitting code which is totally or partially    *
* the product of other individuals is a violation of the Academic    *
* Integrity Policy and accepted ethical precepts. Falsified          *
* execution results are also results of improper activities. Such    *
* violations may result in zero credit for the assignment, reduced   *
* credit for the assignment, or course failure.                      *
\********************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void ulam(int input) {
	cout << "The ulam sequence for " << input << " is: ";
	while (input > 1) {
		cout << input << " ";
		input = (input % 2) * (3 * input + 1) + !(input % 2) * (input / 2);
	}
	cout << "1";
}

int main() {
	int input;
	while (true) {
		cout << endl << "Please enter an integer greater than or equal to 2: " << endl;
		cin >> input;
		if (input >= 2) {
			ulam(input);
		}
		else if (input < 2) {
			cout << input << " is not greater than or equal to 2." << endl;
		}
	}
	return 0;
}

/*

Please enter an integer greater than or equal to 2:
1
1 is not greater than or equal to 2.

Please enter an integer greater than or equal to 2:
4
The ulam sequence for 4 is: 4 2 1
Please enter an integer greater than or equal to 2:


*/