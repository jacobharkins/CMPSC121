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
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));
	int key = (rand() % RAND_MAX);
	string number[13] = { "","a One.", "a Two.", "a Three.", "a Four.", "a Five.", "a Six." ,"a Seven." ,"an Eight!", "a Nine.", "a Ten.", "an Eleven.", "a Twelve." };
	cout << "You rolled " << number[(2 + ((key & 7) % 6) + (((key & 56) >> 3) % 6))];
	return 0;
}

/*
You rolled an Eight!
*/