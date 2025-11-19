// coffee shop
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double coffee1 = 5.99;
	double coffee2 = 6.99;
	double coffee3 = 1.99;
	double coffee4 = 1.99;
	double coffee5 = 1.99;
	double total = coffee1 + coffee2 + coffee3 + coffee4 + coffee5;

	if (total >= 20)
	{
		cout << "Free cookie included! Thanks for shopping" << endl;
	}
	else
	{
		cout << "Your total is " << total << "$ Thanks for shopping!" << endl;
	}
	return 0;
}