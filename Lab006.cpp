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

int main() {
	int transaction = 1;
	unsigned long long int units = 0, units_sold = 0;
	//Feeling really good about this quarter!
	long double unit_price= 0,avg_upo = 0,largest_transaction = 0,smallest_transaction = DBL_MAX,total_revenue = 0,avg_revenue = 0,avg_units = 0;
	cout << "Enter transactions -99 0 to stop:" << endl;
	For: 
		cout << "Transaction # " << transaction << setw(4) << ": ";
		cin >> units >> unit_price;
		if (units == -99 && unit_price == 0) goto Return;
		transaction++;
		units_sold += units;
		largest_transaction = (largest_transaction < units* unit_price) * (units * unit_price) + (largest_transaction >= units * unit_price) * largest_transaction;
		smallest_transaction = (smallest_transaction >= units* unit_price) * (units * unit_price) + (smallest_transaction < units * unit_price) * smallest_transaction;
		total_revenue += (units * unit_price);
		goto For;
	Return: 
		transaction--;
		avg_units = units_sold / (transaction == 0 ? 1 : transaction);
		avg_revenue = total_revenue / (transaction == 0 ? 1 : transaction);
		cout << fixed << setprecision(2) << "TRANSACTION PRECESSING REPORT" << endl
			<< "   Transactions processed: " << setw(10) << transaction << endl
			<< "   Units Sold:             " << setw(10) << units_sold << endl
			<< "   Average Units per Order:" << setw(10) << avg_units << endl
			<< "   Largest Transaction:    " << setw(10) << largest_transaction << endl
			<< "   Smallest Transaction:   " << setw(10) << smallest_transaction << endl
			<< "   Total Revenue:          " << setw(10) << total_revenue << endl
			<< "   Average Revenue         " << setw(10) << avg_revenue;
	return 0;
}

/*
Enter transactions -99 0 to stop:
Transaction # 1  : 1 1
Transaction # 2  : 1 1
Transaction # 3  : 1 1
Transaction # 4  : 1 1
Transaction # 5  : 1 1
Transaction # 6  : 1 1
Transaction # 7  : 9999999999999999999 99999999999999999999999999999999999999999999999999999999999999999999999
Transaction # 8  : 1 1
Transaction # 9  : 1 1
Transaction # 10  : 1 1
Transaction # 11  : -99 0
TRANSACTION PRECESSING REPORT
   Transactions processed:         10
   Units Sold:             10000000000000000008
   Average Units per Order:1000000000000000000.00
   Largest Transaction:    1000000000000000079562324861280497143156226140166910515938643997348793075220176113414176768.00
   Smallest Transaction:         1.00
   Total Revenue:          1000000000000000079562324861280497143156226140166910515938643997348793075220176113414176768.00
   Average Revenue         100000000000000013610143093418879568982174616394030302241812869736859973511157455477800960.00				Pretty Good Q2!
*/