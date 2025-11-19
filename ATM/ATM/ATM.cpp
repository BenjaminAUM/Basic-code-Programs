// ATM
#include <iostream>
using namespace std;

int main()
{
	double balance = 2000;
	double amount;

	cout << "How much would you like to withdraw?";
	cin >> amount;

	if (amount <= balance)
	{
		cout << "Transaction Successful, have a nice day!" << endl;
	}
	else
	{
		cout << "Transaction Failed, Insufficient funds" << endl;
	}
	return 0;
}