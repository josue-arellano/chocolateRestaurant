#include <iostream>

using namespace std;

int main()
{
	cout << "00000000000000000000000000000000000\n"
		<< "00                               00\n"
		<< "0 Welcome to Chocolate Restaurant 0\n"
		<< "00                               00\n"
		<< "00000000000000000000000000000000000\n"
		<< "Fingers....................   $1.25\n"
		<< "Drops......................   $0.85\n"
		<< "Peppermints................   $0.50\n"
		<< "Bears......................   $2.75\n"
		<< "Kisses.....................   $0.35\n";
	int input1;
	cout << "How many fingers?\n";
	cin >> input1;
	double total1 = 1.25 * input1;
	int input2;
	cout << "How many drops?\n";
	cin >> input2;
	double total2 = .85 * input2;
	int input3;
	cout << "How many peppermints?\n";
	cin >> input3;
	double total3 = .5 * input3;
	int input4;
	cout << "How many bears?\n";
	cin >> input4;
	double total4 = 2.75 * input4;
	int input5;
	cout << "How many kisses?\n";
	cin >> input5;
	double total5 = .35 * input5;
	double sum = total1 + total2 + total3 + total4 + total5;
	double tax = sum * 10.25 / 100;
	double ftotal = sum + tax;
	int sub = sum + tax;
	cout << "You have odered " << input1 << " fingers, " << input2 << " drops, " << input3
		<< " peppermints, " << input4 << " bears, and " << input5 << " kisses. The total for this order is $"
		<< sub << ".";
	cout.precision(2);
	cout << (ftotal - sub) * 100 << " including tax." << endl;
	return 0;
}