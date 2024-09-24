#include <iostream>

using namespace std;

int main(void) {

	
	double totalDue;
	double amountPaid;
	double change;
	int dollars;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	const int DOLLARS = 100;
	const int QUARTERS = 25;
	const int DIMES = 10;
	const int NICKLES = 5;
	const int PENNIES = 1;
	
	cout << "Enter total due: ";
	cin >> totalDue;

	cout << "Enter amount paid: ";
	cin >> amountPaid;

	cout << "\n\nCustomer Owes: $" << totalDue << endl;
	cout << "Customer Paid: $" << amountPaid << endl;


	change = (amountPaid - totalDue) * 100;
	cout << "Change Due: $" << change / 100 << endl;

	

	// dollars
	if (change >= 100) {
		dollars = change;
		cout << dollars / 100 << " Dollars" << endl;
		change = change - (DOLLARS * (dollars / 100));
	}
		// quarters
	if (change >= 25) {
		quarters = change / QUARTERS;
		cout << quarters << " Quarters" << endl;
		change = change - (quarters * QUARTERS);
	}
		//dimes
	if (change >= 10) {
		dimes = change / DIMES;
		cout << dimes << " Dimes" << endl;
		change = change - (dimes * DIMES);
	}
	// nickles
	if (change >= 5) {
		nickels = change / NICKLES;
		cout << nickels << " Nickels" << endl;
		change = change - (nickels * NICKLES);
	}
	// pennies
	if (change == 1) {
		pennies = change;
		cout << pennies << " Pennies" << endl;
	}
	
	if (change > 1) {
		pennies = change / PENNIES;
		cout << pennies << " Pennies" << endl;
	}

	return 0;

}