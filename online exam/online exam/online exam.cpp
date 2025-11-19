// online exam
#include <iostream>
using namespace std;

int main()
{
	bool camera = true;
	bool microphone = true;

	if (camera && microphone == true)
	{
		cout << "Access Granted" << endl;
	}
	else
	{
		cout << "Access Denied" << endl;
	}
	return 0;
}