// Self checkout
#include <iostream>
using namespace std;

int main()
{
	double price_1, price_2, price_3;
	int quantity_1, quantity_2, quantity_3, total;

	cout << "Enter Price of first item: ";
	cin >> price_1;
	cout << "Enter quantity of first item: ";
	cin >> quantity_1;

	cout << "Enter Price of second item: ";
	cin >> price_2;
	cout << "Enter quantity of second item: ";
	cin >> quantity_2;

	cout << "Enter price of third item: ";
	cin >> price_3;
	cout << "Enter quantity of third item: ";
	cin >> quantity_3;

	total = (price_1 * quantity_1) + (price_2 * quantity_2) + (price_3 * quantity_3);

	cout << "Your total is " << total << endl;
	return 0;
}