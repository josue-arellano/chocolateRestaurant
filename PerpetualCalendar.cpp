#include<iostream>
using namespace std;

bool isLeapYear(int year) {
	if(year % 4 == 0) 
		if(year % 100 == 0)
			if(year % 400 == 0) return false;
		else return true;
	else return false;
}

int main()
{
	char ans;
	int year, month, date, m, y, result;
	bool Isleapyear = false;
	cout << "Welcome to the Perpetual Calendar Program!" << endl;
	do
	{
		cout << "Enter a year: ";
		cin >> year;
		cout << "Enter a month (1=Jan, 2=Feb, ...): ";
		cin >> month;
		cout << "Enter a numberical date (1-31): ";
		cin >> date;
		Isleapyear = isLeapYear(year);
		switch (month)
		{
		case 1:
			cout << "January ";
			if (Isleapyear)
				m = 6;
			else
				m = 0;
			break;
		case 2:
			cout << "February ";
			if (Isleapyear)
				m = 2;
			else
				m = 3;
			break;
		case 5:
			cout << "May ";
			m = 1;
			break;
		case 8:
			cout << "August ";
			m = 2;
			break;
		case 3:
		case 11:
			if (month == 3)
				cout << "March ";
			else if (month == 11) cout << "November ";
			m = 3;
			break;
		case 6:
			cout << "June ";
			m = 4;
			break;
		case 9:
		case 12:
			if (month == 9)
				cout << "September ";
			else if (month == 12) cout << "December ";
			m = 5;
			break;
		case 4:
		case 7:
			if (month == 4)
				cout << "April ";
			else if (month == 7) cout << "July ";
			m = 6;
			break;
		case 10:
			cout << "October ";
			m = 0;
		}
		y = ((year % 100) / 4 + 10) % 7;
		result = (m + date + y) % 7;
		cout << date << ", " << year << " falls on a ";
		switch (result)
		{
		case 0:
			cout << "Sunday.\n";
			break;
		case 1:
			cout << "Monday.\n";
			break;
		case 2:
			cout << "Tuesday.\n";
			break;
		case 3:
			cout << "Wednesday.\n";
			break;
		case 4:
			cout << "Thurday.\n";
			break;
		case 5:
			cout << "Friday.\n";
			break;
		case 6:
			cout << "Saturday.\n";
			break;
		}
		cout << "Would you like to enter another data? (y/n) ";
		cin >> ans;
	} while (ans == 'y');
	cout << "Thank you!" << endl;
	return 0;
}