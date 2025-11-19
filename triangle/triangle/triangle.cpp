// triangle
#include <iostream>
using namespace std;

int main()
{
	double side_1, side_2;
	side_1 = 4.2;
	side_2 = 5.6;
	int side_3;
	side_3 = 7;

	double perimeter;
	perimeter = side_1 + side_2 + side_3;
	double area;
	area = (1/2) * side_1 * side_2;

	cout << "The perimeter of the triangle is: " << perimeter << endl;
	cout << "The area of the triangle is: " << area << endl;

	return 0;
}