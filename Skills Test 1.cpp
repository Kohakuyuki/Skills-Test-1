#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	//Inputs
	double pphour, hourspweek, incomewotax, incomewtax, moneyclothes, moneysupp, addsavings;
	int moneysavings;

	cout << setprecision(2) << fixed << showpoint;

	//Constants
	//Total of 50% in tax including savings bonds.
	const double summer_tax = .14;
	const double clothes_acce = .10;
	const double school_supp = .01;
	const double savings_bonds = .25;
	const double add_parents = 0.50;
	const int weekdays = 35;
	

	//Prompts
	cout << "Please type in the Pay Rate (per hour) of your job: \n";
	cin >> pphour;

	cout << "Please type in the number of hours you worked each week: \n";
	cin >> hourspweek;

	//Computations
	incomewotax = (pphour * (hourspweek * weekdays));
	incomewtax = incomewotax - (pphour * (hourspweek * weekdays)) * summer_tax;
	moneyclothes = (pphour * (hourspweek * weekdays)) * clothes_acce;
	moneysupp = (pphour * (hourspweek * weekdays)) * school_supp;
	moneysavings = (pphour * (hourspweek * weekdays)) * savings_bonds;
	addsavings = moneysavings *  add_parents;

	//Output
	cout << "Your income before taxes from your summer job: " << "$" << incomewotax  << endl;
	cout << "Your income after taxes from your summer job: " << "$" << incomewtax << endl;
	cout << "The money you spend on clothes and other accessories: " << "$" << moneyclothes << endl;
	cout << "The money you spend on school supplies: " << "$" << moneysupp << endl;
	cout << "The money you spend to buy savings bonds: " << "$" << moneysavings << endl;
	cout << "The money your parents spend to buy additional savings bonds for you: " << "$" << addsavings << endl;

	-getch();
	return 0;
}
	
