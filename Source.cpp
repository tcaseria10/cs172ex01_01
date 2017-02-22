#include <iostream>	
#include <ctime>
using namespace std;

// Tyler Caseria
// CS 172
// ex01_01
// 6 February 2017

void ex02 () {
	bool hasPassedTest = true;
	srand(time(NULL));
	int x = rand() % 100;
	int y = rand() % 100;
	if (x >= y)
		cout << "X is greater than or equal to Y." << endl;
	else
		cout << "X is less than Y." << endl;
	int numberOfShares;
	cout << "Input an integer value for Number of Shares." << endl;
	cin >> numberOfShares;
	cout << endl;
	if (numberOfShares < 100)
		cout << "Number of Shares is less than 100." << endl;
	else
		cout << "Number of Shares is greater than or equal to 100." << endl;
	int boxwidth=0;
	int bookwidth=0;
	cout << "Enter an integer value for boxwidth." << endl;
	cin >> boxwidth;
	cout << endl;
	cout << "Enter an integer value for bookwidth." << endl;
	cin >> bookwidth;
	cout << endl;
	if (boxwidth % bookwidth == 0)
		cout << "Boxwidth is evenly divisible by bookwidth." << endl;
	else
		cout << "Boxwidth isn't evenly divisible by bookwidth." << endl;
	int shelflife;
	int temperature;
	cout << "Input an integer value for the shelf life of a box of chocolate." << endl;
	cin >> shelflife;
	cout << "Input an integer value for the outside temperature." << endl;
	cin >> temperature;
	if (temperature > 90) {
		shelflife = shelflife - 4;
		cout << "The shelf life is now " << shelflife << "." << endl;
	}
	else
		cout << "The shelf life is " << shelflife << "." << endl;
	cout << endl;
	int number;
	cout << "Press 1, then press ENTER to exit." << endl;
	cin >> number;
	cout << endl;




}

int main() {
	ex02();
	return 0;
}