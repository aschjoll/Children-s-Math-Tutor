//Course: 	CS216-005
//Project: 	Project 1
//Purpose: 	Write a program that can be used as a math tutor for a young student. The program
//         	repeatedly displays the following menu allowing the student to select an addition,
//         	subtraction, multiplication, or division question to solve, until the student chooses option
//         	5 to quit the program. 
//Author:  	Amberlyn Schjoll
//Date: 	October 2nd, 2017

#include <iostream>
#include <cstdlib>
#include <string>
#include "MathOperations.h"

using namespace std;

// declare global (constant) variable
const int EXIT_OPTION = 5;	// main menu option for EXIT

// --------------------------------------------------------------------------
//                               collectAnswer
// --------------------------------------------------------------------------
// pass an object using const call by reference
// (no copy is made for efficiency and no side-effect, safe to the argument)
// --------------------------------------------------------------------------
void collectAnswer(const MathOperations& question)
{
	int studentAnswer; // The student's answer
	cout << "Please type your answer: " << endl;
	cin >> studentAnswer;
	cin.ignore(256, '\n');

	// if user-input is not a valid integer, allow the user to try again and again...
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Invalid input! Please try again..." << endl;
		cout << "Please type your answer: " << endl;
		cin >> studentAnswer;
		cin.ignore(256, '\n');
	}

	// get valid integer input, then check if it is correct
	question.checkAnswer(studentAnswer);

} // collectAnswer();

//----------------------------------------------------------------
//                         printMenu
//----------------------------------------------------------------
void printMenu() 
{
	cout << "|-----------------------------------|\n";
	cout << "|          Math Tutor Menu          |\n";
	cout << "|       by: Amberlyn Schjoll        |\n";
	cout << "|-----------------------------------|\n";
	cout << "| 1. Addition Problem               |\n";
	cout << "| 2. Subtraction Problem            |\n";
	cout << "| 3. Multiplication Problem         |\n";
	cout << "| 4. Division Problem               |\n";
	cout << "| 5. Quit the Program               |\n";
	cout << "|-----------------------------------|\n";

} // printMenu()

//----------------------------------------------------------------
//                         getMenuOption
//----------------------------------------------------------------
// Returns: the valid menu option chosen by the user
// Displays the main menu and gets the user's option
//----------------------------------------------------------------
int getMenuOption() 
{
	int option = EXIT_OPTION;

	// ask and validate the option
	cout << "Enter selection (1-5): ";
	cin >> option;
	while (option < 1 || option > 5 || cin.fail()) 
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number between 1 and 5.\n";
		cout << "Enter selection: ";
		cin >> option;
		cin.ignore(256, '\n');
	}
	return option;

} // getMenuOption()

//---------------------------------------------------------------
//                             main
//---------------------------------------------------------------
int main()
{
	int num1;          	// The first operand for the operations
	int num2;          	// The second operand for the operations
	string choice;     	// The user's choice: either answer the question or quit
	int option = 0;		// Initializing option

	while (option != EXIT_OPTION)
	{
		system("cls");
		printMenu();
		option = getMenuOption();
		MathOperations question;

		switch (option)
		{
			case 1: num1 = 1 + rand() % 500;
					num2 = 1 + rand() % 500;
					question.setOperands(num1, num2);
					question.Addition();  
					break;
			case 2:	num1 = 1 + rand() % 999;
					num2 = 1 + rand() % 999;
					question.setOperands(num1, num2);
					question.Subtraction();
					break;
			case 3: num1 = 1 + rand() % 100;
					num2 = 1 + rand() % 9;
					question.setOperands(num1, num2);
					question.Multiplication();
					break;
			case 4: num2 = 1 + rand() % 9;
					num1 = num2 * (1 + rand() % 100);
					question.setOperands(num1, num2);
					question.Division();
					break;
			case EXIT_OPTION: cout << "Thank you for using Math Tutor.\n";
					break;
		}
		if (option != EXIT_OPTION)
			collectAnswer(question);
			
		system("pause");		
	}

	return 0;
} // main();