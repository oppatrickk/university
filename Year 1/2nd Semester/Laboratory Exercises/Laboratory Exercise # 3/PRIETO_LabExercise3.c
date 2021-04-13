/*
 *	NAME: PRIETO, John Patrick M.
 *	BLOCK: BSCS-1B
 *	DATE: March 03, 2021
 *	TITLE: Laboratory Exercise 3 | Arrays
 *	
 *	DESCRIPTION:
 *	This program will read 10 integer values from a file "activity3.in"
 *	and will store it into an array named "list". Then, it will output
 *	the contents of the array on the screen. Afterwards, the program will
 *	ask for the user to enter a "key" value that will be used in the array.
 *	The program will then output on the screen the values in the array that
 *	are lesser than and greater than the "key" value. Lastly, it will display
 *	an appropriate message notifying the user whether the key value is found
 *	in the array with its corresponding position. 
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*Functions*/
void lesser_value(int list[], int key);
void greater_value(int list[], int key);
void search_key(int list[], int key);

/*Main Function*/
int main() 
{
	/*Local Definitions*/
	int list[10];
	int key;

	/*File Definitions*/
	FILE *fInput;
	
	/*Retrieve and Assign Input Values*/
	fInput = fopen("activity3.in", "r");

	for (int num = 0; num < 10; num++)
	{
		fscanf(fInput, "%d", &list[num]);
	}

	fclose(fInput);

	/*Display Contents of the Array**/
	printf("Contents of the array: \n");
	
	for (int num = 0; num < 10; num++)
	{
		printf("\t%d", list[num]);
	}
	
	/*Ask for Key Value*/
	printf("\nPlease enter the key value: ");
	scanf("%d", &key);

	/*Pass Values to the Functions*/
	lesser_value(list, key);
	greater_value(list, key);
	search_key(list, key);

	return 0;
}

/*Display Values in the Array that are lesser than the Key Value*/
void lesser_value(int list[], int key) 
{
	printf("Values in the array that are less than %d: \n", key);
	for (int num = 0; num < 10; num++)
	{
		if (list[num] < key)
		{
			printf("\t%d ", list[num]);
		}
	}
}

/*Display Values in the Array that are greater than the Key Value*/
void greater_value(int list[], int key)
{
	printf("\nValues in the array that are greater than %d: \n", key);
	for (int num = 0; num < 10; num++)
	{
		if (list[num] > key)
		{
			printf("\t%d ", list[num]);
		}
	}
}

/*Display if the Key Value is found or not in the Array*/
void search_key(int list[], int key)
{
	for (int num = 0; num < 10; num++)
	{
		if (list[num] == key)
		{
			printf("\nThe key=%d was found at index %d. \n", key, num);
			break;
		}
		else if (num == 9)
		{
			printf("\nThe key=%d was not found in the array. \n", key);
		}
	}
}