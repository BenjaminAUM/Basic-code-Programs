// school supplies
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int notebooks, pens, price_1, price_2, total;

	cout << "How many books are you buying? ";
	cin >> notebooks;
	cout << "Price of notebooks ";
	cin >> price_1;
	cout << "How many pens are you buying? ";
	cin >> pens;
	cout << "Price of Pens ";
	cin >> price_2;

	total = (notebooks * price_1) + (pens * price_2);

	cout << "Your total is " << total << endl;
	return 0;
}