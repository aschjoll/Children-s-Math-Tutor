// Course: CS216-005
// Project: Program 1
// Purpose: to declare the class named MathOperations
// Author: Amberlyn Schjoll

#include <iostream>
#include "MathOperations.h"

using namespace std;

// default constructor
MathOperations::MathOperations()
{
	operand1 = 0;  // the first operand for basic math operation
	operand2 = 0;  // the second operand for basic math operation
	answer = 0;    // the correct answer
}

// set the private data members: operand1 and operand2
// to op1 and op2 respectively
void MathOperations::setOperands(int op1, int op2)
{
	operand1 = op1;
	operand2 = op2;
}

// return the value of the data member: answer
int MathOperations::getAnswer() const
{
	return answer;
}

// apply the addition operation to operand1 and operand2
// set the answer equal to operand1 + operand2
void MathOperations::Addition()
{
	cout << "   " << operand1 << endl;
	cout << "+ " << operand2 << endl;
	cout << "-----" << endl;

	answer = operand1 + operand2;
}

// apply the subtraction operation to operand1 and operand2
// set the answer equal to operand1 - operand2
void MathOperations::Subtraction()
{
	cout << "  " << operand1 << endl;
	cout << "- " << operand2 << endl;
	cout << "-----" << endl;

	answer = operand1 - operand2;
}

// apply the multiplication operation to operand1 and operand2
// set the answer equal to operand1 * operand2
void MathOperations::Multiplication()
{
	cout << "  " << operand1 << endl;
	cout << "*  " << operand2 << endl;
	cout << "-----" << endl;

	answer = operand1 * operand2;
}

// apply the (integer) division operation to operand1 and operand2
// set the answer equal to operand1 / operand2
void MathOperations::Division()
{
	cout << operand1 << " / " << operand2 << endl;

	answer = operand1 / operand2;
}

// if answer == response, print a message of congratulations
// otherwise display the correct answer
void MathOperations::checkAnswer(int response) const
{
	if (answer == response)
		cout << "Congratulations!" << endl;
	else
		cout << "Here is the correct answer: " << answer << endl;
}