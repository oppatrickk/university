/*
 *	NAME:	PRIETO, John Patrick M.
 *	BLOCK:	BSCS-1B
 *	DATE:	01-20-21
 *	TITLE:	Two-way Selection (Problem # 02)
 *
 *	This program checks if the user is a robot or not
 *	based on a given code. 
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	/*Local Definitions*/
	int CAPTCHA;
	int code = 1105269420;

	/*Prompt*/
	printf(	"-----CAPTCHA----- \n"
			"Are you a robot? \n\n");
	
	printf("%d \n\n", code);
		
	printf("Type the numbers above: ");
	scanf("%d", &CAPTCHA);

	/*Statements*/
	if (CAPTCHA == code)
	{
		printf("\nAccess Granted! \n");
		
	}
	else
	{
		printf("\nInvalid code! \n");
	}
	return 0;
}

