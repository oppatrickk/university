/*Celcius.c (Chapter2, page22)*/
/*Converts a Fahrenheit temperature to Celcius*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)

main() 
{
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celcius equivalent: %.1f\n", celsius);
	return 0;	
}