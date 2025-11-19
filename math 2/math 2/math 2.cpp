// math 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number;
	cout << "Enter the number" << endl;
	cin >> number;
	double power, square_root;
	int square;
	cout << "Enter the power" << endl;
	cin >> square;
	power = pow(number, square);
	square_root = sqrt(number);

	cout << "The square root of " << number << " is " << square_root << endl;
	cout << "The Square of " << number << " is " << power << endl;

	return 0;
}