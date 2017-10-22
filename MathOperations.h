#pragma once
// Course:	CS216-005
// Project:	Program 1
// Purpose:	to declare the class named MathOperations
// Author:	Amberlyn Schjoll
// Date:	October 2, 2017

#ifndef MATHOPERATIONS_H
#define MATHOPERATIONS_H

#include <iostream>

using namespace std;

class MathOperations
{
public:
	// default constructor
	MathOperations();

	// set the private data members: operand1 and operand2
	// to op1 and op2 respectively
	void setOperands(int op1, int op2);

	// return the value of the data member: answer
	int getAnswer() const;

	// apply the addition operation to operand1 and operand2
	// set the answer equal to operand1 + operand2
	void Addition();

	// apply the subtraction operation to operand1 and operand2
	// set the answer equal to operand1 - operand2
	void Subtraction();

	// apply the multiplication operation to operand1 and operand2
	// set the answer equal to operand1 * operand2
	void Multiplication();

	// apply the (integer) division operation to operand1 and operand2
	// set the answer equal to operand1 / operand2
	void Division();

	// if answer == response, print a message of congratulations
	// otherwise display the correct answer
	void checkAnswer(int response) const;

private:
	int operand1;  // the first operand for basic math operation
	int operand2;  // the second operand for basic math operation
	int answer;    // the correct answer
};

#endif   /* MATHOPERATIONS_H */
