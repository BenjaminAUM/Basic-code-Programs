// food delivery
#include <iostream>
using namespace std;

int main()
{
	double delivery = 50;

	if (delivery >= 50)
	{
		cout << "Free Delivery" << endl;
		if (delivery > 49 - 20)
		{
			cout << "$5 fee" << endl;
		}
		else
		{
			cout << "$10 fee" << endl;
		}
	}
	return 0;
}