// university
#include <iostream>
using namespace std;

int main()
{
	int marks, exam;
	bool sports;

	cout << "Marks %? ";
	cin >> marks;

	cout << "Exam score? ";
	cin >> exam;

	cout << "Enrolled in sports? ";
	cin >> sports;

	if (marks >= 85 &&exam >= 80)
	{
		cout << "Admission in Honors Program!" << endl;
	}
	else if (marks >= 70 && exam >= 60)
	{
		cout << "Admission in Regular Program" << endl;
	}
	else if (marks >= 60 && sports == true)
	{
		cout << "Admission under Sports Quota" << endl;
	}
	else
	{
		cout << "Application Rejected" << endl;
	}
	return 0;
}