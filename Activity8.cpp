//Class:      	CMPSC 121
//Experiment:   	02
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
#include <iomanip>1
using namespace std;


int main() {
	double x_coordinate, y_coordinate;
	char c;
	const char* quadrant;
	cout << "Enter your (x,y) point:";
	cin >> c >> x_coordinate >> c >> y_coordinate >> c;
	quadrant = (x_coordinate == 0 ? (y_coordinate == 0 ? "Origin" : "Y-Axis") : (x_coordinate > 0 ? (y_coordinate > 0 ? "First Quadrant" : "Fourth Quadrant") : (y_coordinate > 0 ? "Second Quadrant" : "Third Quadrant")));
	cout << "Your point lies in the " << quadrant;
	return 0;
}

/*
Enter your (x,y) point:(-1,3)
Your point lies in the Second Quadrant
*/

/* 
I have been trying to get ahold of you regarding grades on a few assignments, 
I do not know if my emails got lost or the comments didn't ping you
but if you get a chance could you please look over them. Thanks.
*/