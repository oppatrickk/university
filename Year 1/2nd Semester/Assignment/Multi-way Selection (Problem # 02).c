/*
 *	NAME: PRIETO, John Patrick M.
 *	BLOCK: BSCS-1B
 *	DATE: 01-20-21
 *	TITLE: Multi-way Selection (Problem # 02)
 *
 *	This program determines which quadrant an input 
 *	coordinate belongs to:
 *	- Quadrant 1: X-Coordinate (Positive) and Y-Coordinate (Positive)
 *	- Quadrant 2: X-Coordinate (Positive) and Y-Coordinate (Negative)
 *	- Quadrant 3: X-Coordinate (Negative) and Y-Coordinate (Negative)
 *	- Quadrant 4: X-Coordinate (Negative) and Y-Coordinate (Positive)
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	/*Local Definitions*/
	int x_coordinate;
	int y_coordinate;
	
	/*Prompt*/
	printf("------------Cartesian Coordinate System------------ \n");

	printf("Enter the values for the X and Y coordinates: ");
	scanf("%d %d", &x_coordinate, &y_coordinate);

	/*Statements*/
	if (x_coordinate > 0 && y_coordinate > 0)
	{
		printf("\nThe coordinate point (%d, %d) lies in the FIRST quandrant.\n", x_coordinate, y_coordinate);
	}
	else if (x_coordinate < 0 && y_coordinate > 0)
	{
		printf("\nThe coordinate point (%d, %d) lies in the SECOND quandrant.\n", x_coordinate, y_coordinate);
	}
	else if (x_coordinate < 0 && y_coordinate < 0)
	{
		printf("\nThe coordinate point (%d, %d) lies in the THIRD quandrant.\n", x_coordinate, y_coordinate);
	}
	else if (x_coordinate > 0 && y_coordinate < 0)
	{
		printf("\nThe coordinate point (%d, %d) lies in the FOURTH quandrant.\n", x_coordinate, y_coordinate);
	}
	else if (x_coordinate == 0 && y_coordinate == 0)
	{
		printf("\nThe coordinate point (%d, %d) lies at the ORIGIN.\n", x_coordinate, y_coordinate);
	}
	else
	{
		printf("\nInvalid Input\n");
	}
	return 0;
}

