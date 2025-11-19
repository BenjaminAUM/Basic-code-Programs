// voting
#include <iostream>
using namespace std;

int main()
{
	int age;
	bool citizen;

	cout << "How old are you? ";
	cin >> age;


	if (age >= 18)
	{
		cout << "Are you a current citizen? ";
		cin >> citizen;
		if (citizen == true)
		{
			cout << "You are eligiable to vote" << endl;
		}
		else
		{
			cout << "You must be a citizen to vote" << endl;
		}
	}
	else
	{
		cout << "You are not old enough to vote" << endl;
	}

	
}