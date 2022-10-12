#include "Invoice.h"
#include <iostream>
using namespace std;

void Invoice::outputTotal() {

	cout << "Your total is: " << calcTotal() << endl;

}

double Invoice::calcTotal() {

	// if professor
	if (choice == 1) {
		// if car
		if (vchoice == 1) {
			return profPrice + carPrice;
		}
		// if truck
		else if (vchoice == 2) {
			return profPrice + truckPrice;
		}
		// if motorcycle
		else if (vchoice == 3) {
			return profPrice + cyclePrice;
		}
		// if electric car
		else if (vchoice == 4) {
			return profPrice + electricPrice;
		}
	}
	// if visitor
	else if (choice == 2) {
		// if car
		if (vchoice == 1) {
			return visitPrice + carPrice;
		}
		// if truck
		else if (vchoice == 2) {
			return visitPrice + truckPrice;
		}
		// if motorcycle
		else if (vchoice == 3) {
			return visitPrice + cyclePrice;
		}
		// if electric car
		else if (vchoice == 4) {
			return visitPrice + electricPrice;
		}
	}
	// if vendor
	else if (choice == 3) {
		// if car
		if (vchoice == 1) {
			return vendPrice + carPrice;
		}
		// if truck
		else if (vchoice == 2) {
			return vendPrice + truckPrice;
		}
		// if motorcycle
		else if (vchoice == 3) {
			return vendPrice + cyclePrice;
		}
		// if electric car
		else if (vchoice == 4) {
			return vendPrice + electricPrice;
		}
	}
	// if student
	else if (choice == 4) {
		// if car
		if (vchoice == 1) {
			return studentPrice + carPrice;
		}
		// if truck
		else if (vchoice == 2) {
			return studentPrice + truckPrice;
		}
		// if motorcycle
		else if (vchoice == 3) {
			return studentPrice + cyclePrice;
		}
		// if electric car
		else if (vchoice == 4) {
			return studentPrice + electricPrice;
		}
	}
}

void Invoice::setChoice(int c, int vc) {
	choice = c;
	vchoice = vc;
}
