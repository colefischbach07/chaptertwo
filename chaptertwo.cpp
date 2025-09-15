/*
programmer: your name
File Name: chaptertwo.cpp
Date:09/2025
create a program that compute total sales tax on a 95$ purchase.
set state tax to 4 percent and the county sales tax to 2 percent
*/



#include <iostream>
using namespace std;

int main()
{
	double stateTax;
	double countyTax;
	double itemcost;

	cout << "please enter the state tax (as a decimal): ";
	cin >> stateTax;
	cout << "please enter the county tax (as a decimal): ";
	cin >> countyTax;
	cout << "please enter the cost of item you purchased : ";
	cin >> itemcost;

	double totaltax = (itemcost * stateTax ) + (itemcost * countyTax);
	double totalcost = totaltax + itemcost;

	cout << "the total tax including a state tax of " << stateTax << endl;
	cout << "and a county tax of" << countyTax << endl;
	cout << " your total cost is: " << totalcost << endl;

	return 0;
}