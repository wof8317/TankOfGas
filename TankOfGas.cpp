// Chapter 2, Programming Challenge "Tank of Gas"
#include <iostream>
using namespace std;

int main()
{
	// Declare variables to hold information about tank capacity and mpg
	double tankSize = 20.0;			 // Number of gallons the tank holds
	double mpgTown = 21.5;			 // Miles per gallon in town
	double mpgHighway = 26.8;		 // ditto, but while on the highway
	double totalMiles1 = 0.0;		 // Total Miles while in town
	double totalMiles2 = 0.0;		 // ditto while on the highway
	// Calculation total miles in town
	totalMiles1 = tankSize * mpgTown;
	// Same as above, but while on the highway instead
	totalMiles2 = tankSize * mpgHighway;

	// Set up information about this program and what the user will enter and
	// will enter and results expected
	//======================================================================
	cout << "My car has a " << tankSize << " gallon tank of gas and gets " << mpgTown << " miles ";
	cout << "per gallon in town" << endl;
	cout << "and " << mpgHighway << " miles per gallon on the highway." << endl;
	cout << "This means that my car can drive a total of: " << endl;
	cout << totalMiles1 << " miles in town and " << totalMiles2 << " miles on the highway." << endl;
	// Ask the user if they want to enter some information
	cout << "\nDo you want to input information for your car to see your totals?" << endl;
	cout << "You need to know how big your tank is, your mileage in town, and on the highway." << endl;
	cout << "\nEnter info for your car? (y/n)" cin
	cout << "\nHow many gallons of gas does your car hold? ";
	cin >> tankSize;
	return 0;
}