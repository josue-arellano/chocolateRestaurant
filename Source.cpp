#include <iostream>
//882709553
//
using namespace std;
int main()
{
	cout << "00000000000000000000000000000000000\n";
	cout << "00                               00\n";
	cout << "0 Welcome to Chocolate Restaurant 0\n";
	cout << "00                               00\n";
	cout << "00000000000000000000000000000000000\n";
	float price1 = 1.25;
	cout << "Finger.....................   $1.25\n";
	float price2 = .85;
	cout << "Drops......................   $0.85\n";
	float price3 = .50;
	cout << "Peppermints................   $" << price3 << endl;
	float price4 = 2.75;
	cout << "Bears......................   $2.75\n";
	float price5 = .35;
	cout << "Kisses.....................   $0.35\n";
	int input1;
	cout << "How many fingers?\n";
	cin >> input1;
	float total1 = price1*input1;
	int input2;
	cout << "How many drops?\n";
	cin >> input2;
	float total2 = price2 * input2;
	int input3;
	cout << "How many peppermints?\n";
	cin >> input3;
	float total3 = price3 * input3;
	int input4;
	cout << "How many bears?\n";
	cin >> input4;
	float total4 = price4 * input4;
	int input5;
	cout << "How many kisses?\n";
	cin >> input5;
	float total5 = price5 * input5;
	float sum = total1 + total2 + total3 + total4 + total5;
	float tax = sum * 10.25 / 100;
	cout << "You have odered " << input1 << " fingers, " << input2 << " drops, " << input3
		<< " peppermints, " << input4 << " bears, and " << input5 << " kisses. The total for this order is $"
		<< sum + tax << " including tax." << endl;
	return 0;
	
}