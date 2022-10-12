// main.cpp
// Michael Steiger

#include <iostream>
#include <string>
#include "Professor.h"
#include "Invoice.h"

using namespace std;

int main() {

	Professor prof1;
	Invoice inv1;

	int userID;
	int carID;
	string profName;
	string profAddress;
	string profEmail;
	string profLocation;
	string profTime;
	
	// vehicle variables
	string make;
	string model;
	string year;
	string color;
	string licenseNum;

	cout << "Clemson Parking Services" << endl;
	cout << "Please select one that applies" << endl;
	cout << "1-- Professor" << endl;
	cout << "2-- Visitor"	<< endl;
	cout << "3-- Vendor"	<< endl;
	cout << "4-- Student"	<< endl;

	cin >> userID;
	while (userID < 1 && userID > 4) {
		cout << "Invalid input. Please enter a valid input" << endl;
		cin >> userID;
	}

	// needed clear because the last char typed into the console is enter 
	// and getline just reads the enter and stops so we need to clear 
	// and ignore for getline() to work inside switch case
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');


	switch (userID) {
		
		case 1:
			cout << "Professor" << endl;
			// get name
			cout << "Please enter your name: ";
			getline(cin, profName);
			// get address
			cout << "Please enter your address: ";
			getline(cin, profAddress);
			// get email
			cout << "Please enter your email address: ";
			getline(cin, profEmail);
			// get teaching location
			cout << "Please enter your teaching location: ";
			getline(cin, profLocation);
			// get time of latest class
			cout << "Please enter the time of your last class: ";
			getline(cin, profTime);
			Professor(profName, profAddress, profEmail, profLocation, profTime);
			break;

		case 2: 
			// visitor
			break;

		case 3:
			// vendor
			break;

		case 4: 
			// student
			break;
	}

	// Vehicle options after user selects his ID

	cout << "Please select a vehicle type: " << endl;
	cout << "1-- Car" << endl;
	cout << "2-- Truck" << endl;
	cout << "3-- Motorcycle" << endl;
	cout << "4-- Electric car" << endl;

	cin >> carID;
	// input validation
	while (carID < 1 && carID > 4) {
		cout << "Invalid input. Please enter a valid input" << endl;
		cin >> carID;
	}

	// needed clear because the last char typed into the console is enter 
	// and getline just reads the enter and stops so we need to clear 
	// and ignore for getline() to work inside switch case
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// car selection
	switch (carID) {

		case 1:
			cout << "Car: " << endl;
			cout << "Please enter the make of your car: ";
			getline(cin, make);

			cout << "Please enter the model of your car: ";
			getline(cin, model);

			cout << "Please enter the year of your car: ";
			getline(cin, year);

			cout << "Please enter the color of your car: ";
			getline(cin, color);

			cout << "Please enter your license plate number: ";
			getline(cin, licenseNum);

			inv1.setChoice(userID, carID);
			inv1.outputTotal();
			break;

		case 2:
			// truck
			break;

		case 3: 
			// motorcycle
			break;

		case 4:
			// electic car
			break;
	}

	return 0;
}
