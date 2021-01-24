#include <iostream>
#include <string>
#include<stdlib.h>
#include<fstream> 
using namespace std;

class Contact {
	string name;
	string phone_number;
	string email;
public:
	Contact() {}
	Contact(string Name, string Phone, string Email) {
		setdetails(Name, Phone, Email);
	}
	void setdetails(string n, string p, string e)
	{
		name = n;
		phone_number = p;
		email = e;
	}
	
	string getname() { return name; }
	string getphone_number() { return phone_number; }
	string getemail() { return email; }

	
	friend ostream& operator<< (ostream& out, const Contact& contact);
};

ostream& operator<< (ostream& out, const Contact& contact) {
out << contact.name<< "\t\t"<< contact.phone_number<< "\t\t"<< contact.email<< endl;
return out;
}

int main()
{
	string n,p,e, filename;
	Contact phonebook[3];

	cout << "Enter the detail (First Name, Phone Number and Email Address) of the three people:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		cin >> p;
		cin >> e;
		phonebook[i].setdetails(n, p, e);
	}
	system("CLS");
	cout << "Enter the File Name" << endl;
	cin >> filename;
	ofstream abc(filename, ios::out);
	if (!abc)
	{
		cerr << "file not found." << endl;
		exit(1);
	}
	else {
		cout << "Name" << "\t\t" << "Phone Number" << "\t\t" << "Email Address" << endl;
		abc << "Name" << "\t\t" << "Phone Number" << "\t\t" << "Email Address" << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << phonebook[i];
			abc << phonebook[i];
		}
	}
}