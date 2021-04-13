/*THis program calculates and prints the sum of two numbers.*/
/*Written by: Rossitza S. Marinova*/
/*Date: January 12, 2005*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(){
	/*Local Definitions*/
	int int1;							/*First number*/
	int int2;							/*Second number*/
	int sum;							/*will store the sum*/

	/*Statements*/
	printf("Enter first integer\n");	/*prompt*/
	scanf("%d", &int1);					/*read an integer*/

	printf("Enter second integer\n");	/*prompt*/
	scanf("%d", &int2);					/*read an integer*/
	
	sum = int1 + int2;					/*add the two numbers*/

	printf("The sum is: %d\n", sum);	/*print the sum*/

	return 0;
}	/*end of main*/