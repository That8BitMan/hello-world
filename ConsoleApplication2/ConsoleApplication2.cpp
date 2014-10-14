// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "windows.h"

int main()
{
	using namespace std;

	int num1(0);
	int num2(0);
	int num3(0);


	cout << "Hello World! ";									//Print "Hello World"
	cout << "This is my first program!";
	cout << endl;												//Start a new line
	cout << endl;
	cout << "(Press Enter)";
	cin.get();
	system("CLS");

	cout << "Pick a number between 1 and 10: ";
	cin >> num1;												//Take input and put it in a variable named 'num1'

	while ((num1 < 1) || (num1 > 10)) {
		system("CLS");
		cout << "Please enter a number between 1 and 10: ";
		cin >> num1;
	}

	system("CLS");
	cout << "Ok, Pick another: ";
	cin >> num2;												//2nd number

	while ((num2 < 1) || (num2 > 10)) {
		cout << endl;
		cout << "Please enter a number between 1 and 10: ";
		cout << endl;
		cin >> num2;
	}

	system("CLS");
	cout << "Your numbers were ";
	cout << num1;
	cout << " and ";
	cout << num2;
	cout << endl;
	cout << "What do you get when you add them together? ";
	cin >> num3;												//Answer

	while (num3 != num1 + num2)	{
		system("CLS");
		cout << "Sorry, try again: ";
		cin >> num3;
	}

	system("CLS");
	cout << "Good Job! The answer was indeed ";
	cout << num3;
	cout << endl;
	cout << "(Press enter to exit)";
	
	cin.get();
	cin.get();
	system("CLS");
	cout << "Coco pops";
	Sleep(1500);

		return 0;
}