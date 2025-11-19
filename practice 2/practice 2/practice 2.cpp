// practice 2
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Customer_Name;
	string Coffee_Name;
	string Coffee_Size;
	cout << "Enter Customer name" << endl;
	cin >> Customer_Name;
	cout << "Enter Name of Coffee" << endl;
	cin >> Coffee_Name;
	cout << "Enter size of Coffee" << endl;
	cin >> Coffee_Size;

	

	cout << "Receipt for " << Customer_Name << ": " << endl;
	cout << "1 x " << Coffee_Size << " " << Coffee_Name << endl;
	cout << "Enjoy your coffee!" << endl;

	return 0;
}