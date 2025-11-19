// loan eligibilty
#include <iostream>
using namespace std;

int main()
{
	int age, credit, salary;

	cout << "Age? ";
	cin >> age;

	if (age >= 21)
	{
		cout << "Current Salary? ";
		cin >> salary;
		if (salary > 30000)
		{
			cout << "Credit score? ";
			cin >> credit;
			if (credit > 650)
			{
				cout << "Loan Approved!" << endl;
			}
			else
			{
				cout << "Not eligible(low credit score)" << endl;
			}
		}
		else
		{
			cout << "Not eligible(low income)" << endl;
		}
	}
	else
	{
		cout << "Not eligible (too young!)" << endl;
	}
	return 0;
}