// ice cream shop
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int price, quantity,total;

	cout << "How many are you buying? ";
	cin >> quantity;

	cout << "Enter price of one ice cream: ";
	cin >> price;

	total = price * quantity;

	cout << "You are buying " << quantity << " Pieces of ice cream at " << price << " for a total of " << total << endl;
	return 0;
}