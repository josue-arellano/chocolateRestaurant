#include <iostream>
//882709553
//
using namespace std;
int main()
{
	float FINGER_PRICE = 1.25;
	float DROP_PRICE = .85;
	float PEPPER_PRICE = .50;
	float BEAR_PRICE = 2.75;
	float KISS_PRICE = .35;

	cout << "00000000000000000000000000000000000\n";
	cout << "00                               00\n";
	cout << "0 Welcome to Chocolate Restaurant 0\n";
	cout << "00                               00\n";
	cout << "00000000000000000000000000000000000\n";
	cout << "Finger.....................   $" << FINGER_PRICE << endl;
	cout << "Drops......................   $" << DROP_PRICE << endl;
	cout << "Peppermints................   $" << PEPPER_PRICE << endl;
	cout << "Bears......................   $" << BEAR_PRICE << endl;
	cout << "Kisses.....................   $" << KISS_PRICE << endl;
	int input1;
	cout << "How many fingers?\n";
	cin >> input1;
	float total = input1 * FINGER_PRICE;
	int input2;
	cout << "How many drops?\n";
	cin >> input2;
	total += input2 * DROP_PRICE;
	int input3;
	cout << "How many peppermints?\n";
	cin >> input3;
	total += input3 * PEPPER_PRICE;
	int input4;
	cout << "How many bears?\n";
	cin >> input4;
	total += input4 * BEAR_PRICE;
	int input5;
	cout << "How many kisses?\n";
	cin >> input5;
	total += input5 * KISS_PRICE;
	float tax = total * 10.25 / 100;
	cout << "You have odered " << input1 << " fingers, " << input2 << " drops, " << input3
		<< " peppermints, " << input4 << " bears, and " << input5 << " kisses.\nThe total for this order is $"
		<< total + tax << " including tax." << endl;
	return 0;
	
}