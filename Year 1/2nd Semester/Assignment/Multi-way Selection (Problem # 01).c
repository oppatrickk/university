/*
 *	NAME:	PRIETO, John Patrick M.
 *	BLOCK:	BSCS-1B
 *	DATE:	01-20-21
 *	TITLE:	Multi-Way Selection (Problem # 01)
 *
 *	This program creates a menu-driven calculator that performs basic arithmetic operators
 *	using two input numbers and an input operator from the user.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*Local Definitions*/
	char op;
	float num1;
	float num2;
	float SUM;
	float DIFFERENCE;
	float PRODUCT;
	float QUOTIENT;

	/*Prompt*/
	printf("--------------Calculator-------------\n");
	printf("Enter [number 1] [+ - * /] [number 2]\n\n");
	scanf("%f %c %f", &num1, &op, &num2);

	/*Process*/
	SUM = num1 + num2;
	DIFFERENCE = num1 - num2;
	PRODUCT = num1 * num2;
	QUOTIENT = num1 / num2;

	/*Statements*/
	switch (op)
	{
	case '+':
		printf("Answer: %.2f \n", SUM);
		break;

	case '-':
		printf("Answer: %.2f \n", DIFFERENCE);
		break;

	case '*':
		printf("Answer: %.2f \n", PRODUCT);
		break;

	case '/':
		printf("Answer: %.2f \n", QUOTIENT);
		break;

	default:
		printf("Invalid operator \n");
	}

	return 0;
}