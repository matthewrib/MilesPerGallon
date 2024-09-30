/* 
	MilesPerGallon.cpp
	Matthew Bersalona
	CSCI 123 C
	09/19/2024
*/

#include <iostream>

using namespace std;

double calculateMPG(double m, double g);

int main() {
	char progress;
	do {
		double miles, gallons, result;

		cout << "Enter the number of miles travelled: ";
		cin >> miles;
		cout << "Enter the number of gallons of gas used: ";
		cin >> gallons;

		result = calculateMPG(miles, gallons);
		cout << "You got " << result << " miles per gallon.\n";

		cout << "Do you want to calculate the MPG again? (Enter 'y' for yes or 'n' for no): ";
		cin >> progress;
	} while (progress != 'n');
}

double calculateMPG(double m, double g) {
	double MPG = m / g;
	return MPG;
}