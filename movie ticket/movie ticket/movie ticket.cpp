// movie ticket
#include <iostream>
using namespace std;

int main()
{
	int age =15;
	cout << (age<12)||(age>60);

	if (age < 12)
	{
		cout << "Regular ticket" << endl;
	}
	else
	{
		cout << "Discount ticket" << endl;
	}
	return 0;
}