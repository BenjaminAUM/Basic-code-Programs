// quiz
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double question1 = 2 + 2;
	double question2 = 4 + 4;
	double total1 = question1;
	double answer1, answer2, answer3;
	double total2 = question2;

	cout << "What is 2+2?";
	cin >> answer1;

	if (answer1 == total1)
	{
		cout << "Correct" << endl;

		cout << "What is 4+4?";
		cin >> answer2;
		if (answer2 == total2)
		{
			cout << "Correct! You have passed your quiz!" << endl;
		}
		else
		{
			cout << "Wrong" << endl;
		}
	}
	else
	{
		cout << "Wrong" << endl;
	}
	return 0;
}