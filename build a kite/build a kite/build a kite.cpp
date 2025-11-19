// build a kite
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double d_1, d_2, side_length, perimeter, area, side;
	
	cout << "Diagonal 1 is ";
	cin >> d_1;
	cout << "Diagonal 2 is ";
	cin >> d_2;

	side_length = sqrt(d_1 * d_1 + d_2 * d_2 / 2);
	perimeter = 4 * side_length;
	area = d_1 * d_2 / 2;

	cout << "The side length of your kite is " << side_length << endl;
	cout << "The perimeter of your kite is " << perimeter << endl;
	cout << "The area of your kite is " << area << endl;
	return 0;
}