#pragma once

class Invoice {

	private:
		int	choice;
		int vchoice;
		double profPrice	= { 129.99 };
		double visitPrice	= { 59.99 };
		double vendPrice	= { 159.99 };
		double studentPrice = { 199.99 };
		double carPrice		= { 59.99 };
		double truckPrice	= { 79.99 };
		double cyclePrice	= { 19.99 };
		double electricPrice = { 9.99 };
		 

	public:
		double calcTotal();
		void outputTotal();
		void setChoice(int, int);
};