// space ship
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1, x2, y1, y2, z1, z2, distance, mx, my, mz, midpoint, fuel;
	x1 = 2;
	y1 = 3;
	z1 = 5;
	x2 = 6;
	y2 = 7;
	z2 = 9;
	
//	distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1));

	distance = sqrt(pow((x2 - x1) ,2) + pow((y2 - y1) ,2) + pow((z2 - z1) ,2));

	fuel = distance * 2.5;
	mx = (x1 + x2/ 2);
	my = (y1 + y2/ 2);
	mz = (z1 + z2/ 2);

	cout << "The distance between planets is " << distance << endl;
	cout << "Your fuel needed is " << fuel << endl;
	cout << "There is a space station at (" << mx << ", " << my << ", " << mz << ")" << endl;
	return 0;

}