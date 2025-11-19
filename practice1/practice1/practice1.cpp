// practice1
#include <iostream>
#include<string>
using namespace std;

int main()
{
	string name, Flight, Seat, To, From;
	
	cout << "Enter Passenger Name" << endl;
	getline(cin, name); 

	cout << "Enter the flight code" << endl;
	getline(cin, Flight);

	cout << "Enter the Seat Number" << endl;
	getline(cin, Seat);

	cout << "Enter the destination" << endl;
	getline(cin, To);

	cout << "Enter Where from" << endl;
	getline(cin, From);
	


	cout << "********BOARDING PASS**********" << endl;
	cout << "Passenger: " << name << endl;
	cout << "Flight:    " << Flight << endl;
	cout << "Seat:      " << Seat << endl;
	cout << "To:        " << To << endl;
	cout << "From:      " << From <<  endl;
	cout << "*******************************" << endl;

	return 0;
}
