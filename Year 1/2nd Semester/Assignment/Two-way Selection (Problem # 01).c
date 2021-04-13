/*
 *	NAME: PRIETO, John Patrick M.
 *	BLOCK: BSCS-1B
 *	DATE: 01-20-21
 *	TITLE: Two-way Selection (Problem # 01)
 *
 *	This program computes how much a single person will pay when
 *	riding a tricycle. The fare matrix will be based on the
 *	new ordinance of Legazpi City (Ordinance No. 15-0038-202)
 *		- Base Fare (for the 1st 2km) = Php 11.00
 *		- Adjusted Fare (for every succ6eeding km.) = Additional Php 5.00
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	/*Local Definitions*/
	float km;
	float base_fare = 11.00;
	float additional_fare = 5.50;
	float adjusted_fare;

	/*Prompt*/
	printf("-----Tricycle Fare Matrix------\n");
	
	printf("Enter how many kilometers: ");
	scanf("%f", &km);

	/*Statements*/
	if (km > 2)
	{
		km = km - 2;
		adjusted_fare = base_fare + (additional_fare * km);
		printf("Fare: Php %.2f \n", adjusted_fare);
	}
		else
	{
		printf("Fare: Php %.2f \n", base_fare);
	}

	return 0;
}

