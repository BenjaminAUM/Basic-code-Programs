// library access
#include <iostream>
using namespace std;

int main()
{
	bool ID = true;
	bool Library = true;

	if (ID && Library == true)
	{
		cout << "Access granted" << endl;
	}
	else
	{
		cout << "Access denied" << endl;
	}
	return 0;
}