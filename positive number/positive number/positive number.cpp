// positive number
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double square_root;
	int number_1;

	cout << "Enter a Positive number: ";
	cin >> number_1;
	square_root = sqrt(number_1);

	cout << "The square root of " << number_1 << " is " << square_root << endl;
	return 0;
}