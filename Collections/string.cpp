#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string firstName;
	string lastName;

	cout << "Enter first name: " << endl;
	cin >> firstName;

	cout << "Enter last name: " << endl;
	cin >> lastName;

	cout << "By my calculations you are called " << firstName<< " " << lastName << endl;
	cout << "Size: " << firstName.length() << endl;
	cout << "Capacity: " << firstName.capacity() << endl;


	string fullName;
	cout << "Enter full name: " << endl;
	getchar();
	getline(cin, fullName); //getline collects everything until enter while cin terminates itself at the first white space (enter, space, tab)only use getline for reading strings
	fullName[1] = 'E';
	cout << "Full Name: " << fullName << endl;

		

	return 0;

}

