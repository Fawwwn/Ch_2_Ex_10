#include <iostream>
// Hint: Use the following formula to calculate miles per gallon (MPG) MPG = Miles Driven / Gallons of Gas Used



int main()
{
	using std::cout;
	using std::cin;

	double gallonsheld;

	double milesdriven;

	cout << "How many gallons does your car hold? ";
	cin >> gallonsheld;

	cout << "How many miles have you driven so far? ";
	cin >> milesdriven;

	double  MPG = milesdriven / gallonsheld;

	cout << "This is your MPG: " << MPG;

	return 0;
}
