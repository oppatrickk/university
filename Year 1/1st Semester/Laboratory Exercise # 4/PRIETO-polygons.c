/*	
 *	NAME:	PRIETO, John Patrick M.
 *	BLOCK:	BSCS-1B
 *	DATE:	10-07-20
 *	TITLE:	Exercise for Lectures 5 and 6
 * 	
 *	This program computes the area and perimeter/circumference of these polygons:
 *	- Square
 *	- Rectangle
 *	- Triangle
 *	- Circle
 */

#define _CRT_SECURE_NO_WARNINGS		/*This statement is used to bypass error message in Visual Studio 2017*/

#include <stdio.h>					/*Standard Input Output Functions*/
#include <math.h>					/*Math Functions*/

int main()
{
	/*Local Definitions*/
	int length1;
	int length2;
	int length3;
	int width;
	int semi_perimeter;
	int radius;
	float pi = 3.14;
	int PERIMETER;
	int AREA;
	float AREA_CIRCLE;
	float CIRCUMFERENCE;

	/*Square*/
	printf(	"This program computes the AREA and PERIMETER of a SQUARE, RECTANGLE, TRIANGLE, and CIRCLE.\n\n"
			"************* SQUARE *****************\n"
			"Input the length of the side of the square: ");
	scanf(	"%d", &length1);												/*Input*/
	
	PERIMETER = 4 * length1;												/*Perimeter Formula*/
	AREA = length1 * length1;												/*Area Formula*/		

	printf(	"Perimeter = %d\n", PERIMETER);
	printf(	"Area = %d\n", AREA);

	/*Rectangle*/
	printf(	"\n************* RECTANGLE *************\n"
			"Input the length and width of the rectangle: ");
	scanf(	"%d %d", &length1, &width);										/*Input*/

	PERIMETER = (2 * length1) + (2 * width);								/*Perimeter Formula*/			
	AREA = length1 * width;													/*Area Formula*/		

	printf(	"Perimeter = %d\n", PERIMETER);
	printf(	"Area = %d\n", AREA);

	/*Triangle*/
	printf(	"\n************* TRIANGLE *************\n"
			"Input the length of the three sides of the triangle: ");
	scanf(	"%d %d %d", &length1, &length2, &length3);						/*Input*/

	PERIMETER = length1 + length2 + length3;								/*Perimeter Formula*/
	semi_perimeter = PERIMETER / 2;											/*Semi-Perimeter Formula*/
	AREA = sqrt(semi_perimeter * (semi_perimeter - length1) * (semi_perimeter - length2) * (semi_perimeter - length3));		/*Heron's Formula*/

	printf(	"Perimeter = %d\n", PERIMETER);
	printf(	"Area = %d\n", AREA);

	/*Circle*/
	printf(	"\n************* CIRCLE *************\n"
			"Input the radius of the circle: ");
	scanf("%d", &radius);													/*Input*/
	
	CIRCUMFERENCE = 2 * pi * radius;										/*Circumference Formula*/
	AREA_CIRCLE = pi * (radius * radius);									/*Area Formula*/
	
	printf("Circumference = %.2f\n", CIRCUMFERENCE);
	printf("Area = %.2f\n", AREA_CIRCLE);

	return 0;
}
