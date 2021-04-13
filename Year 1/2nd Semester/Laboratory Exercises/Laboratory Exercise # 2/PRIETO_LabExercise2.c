/*
 *	NAME: PRIETO, John Patrick M.
 *	BLOCK: BSCS-1B
 *	DATE: February 24, 2021
 *	TITLE: Laboratory Exercise 2 | Recursion
 *
 *	DESCRIPTION:
 *	This program will ask the user to input an integer N.
 *	- If the integer is zero or negative, it will output on the screen the message "The Value N is not a positive integer."
 *	- If the input is positive, it will calculate and implement the following as recursive functions:
 *		a. Summation from 1 to N
 *		b. Factorial of N
 *		c. fibonacci of Nth term
 *	- All the input and printing tasks will be handled by the main() function only
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*Functions*/
int summation(int sum);
int factorial(int fact);
int fibonacci(int fib);

/*Main Function*/
int main() 
{
	/*Local Definitions*/
	int N;
	int sum;
	int fact;
	int fib;

	/*Ask for Input*/
	printf("Please enter a positive integer: ");
	scanf("%d", &N);

	/*Assigning Values*/
	sum = N;
	fact = N;
	fib = N;

	/*Check if the value of N is positive or negative*/
	if (N <= 0)
	{
		printf("\nThe value %d is not a positive integer. \n", N);
	}
	else
	{
		/*Summation*/
		printf("\nThe summation from 1 to %d is %d. \n", N, summation(sum));
		
		/*Factorial*/
		printf("The factorial of %d is %d. \n", N, factorial(fact));
		
		/*Fibonacci Sequence*/
		switch (N)
		{
		case 1:
			printf("The 1st Fibonacci term is %d. \n", fibonacci(fib));
			break;
		case 2:
			printf("The 2nd Fibonacci term is %d. \n", fibonacci(fib));
			break;
		case 3:
			printf("The 3rd Fibonacci term is %d. \n", fibonacci(fib));
			break;
		default:
			printf("The %dth Fibonacci term is %d. \n", N, fibonacci(fib));
			break;
		}
	}

	return 0;
}

/*Summation Computation*/
int summation(int sum)
{
	if (sum <= 1)
	{
		return sum;
	}
	else
	{
		return sum + summation(sum - 1);
	}
}

/*Factorial Computation*/
int factorial(int fact)
{
	if (fact <= 1)
	{
		return 1;
	}
	else
	{
		return fact * factorial(fact - 1);
	}
}

/*Fibonacci Computation*/
int fibonacci(int fib)
{
	if (fib <= 1)
	{
		return fib;
	}
	else
	{
		return fibonacci(fib - 1) + fibonacci(fib - 2);
	}
}