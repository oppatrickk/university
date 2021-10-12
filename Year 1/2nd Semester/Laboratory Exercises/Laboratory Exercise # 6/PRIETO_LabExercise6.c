/*
 *  NAME:  PRIETO, John Patrick M.
 *  BLOCK: BSCS-1B
 *  DATE:  April 28, 2021
 *  TITLE: Laboratory Exercise 6 | Pointers
 *	
 *  DESCRIPTION:
 *  This program will sort a set of strings based on their length (Lexicographic Order)
 *  - The shorter the length, the higher the order of the string.
 *  - Strings of equal lengths are then ordered alphabetically. 
 *  - The case of the characters in each string should not matter. 
 *  - It is also assumed that each string will contain only letters.
 */

#include <stdio.h>
#include <string.h>

#define MAXLENGTH 50

void sort(int n, char *namePtr[]);
  
int main()
{
	int i;
	int num;

	int length[MAXLENGTH];
	char *name[MAXLENGTH];
	char temp[MAXLENGTH];

	/*File Definitions*/
	FILE *fInput;
	FILE *fOutput;

	/*Retrieve Input File*/
	fInput = fopen("strings.txt", "r");
	
	fscanf(fInput, "%d", &num);
	
	for(i = 0; i < num; i++) 
	{
		fscanf(fInput, "%s", temp);
		name[i] = strdup(temp);
	}

	fclose(fInput);

	/*Sort*/
	sort(num, name);

	/*Display and Write*/
	fOutput = fopen("sorted.txt", "w");

	printf("STRING\t\t\t\tADDRESS\t\t\t\tLENGTH\n\n");
	fprintf(fOutput, "STRING\t\t\t\tADDRESS\t\t\t\tLENGTH\n\n");

	for (i = 0; i < num; i++)
	{
		length[i] = strlen(name[i]);

		printf("%-8s\t\t\t%p\t\t%d\n", name[i], &name[i], length[i]);
		fprintf(fOutput, "%-8s\t\t\t%p\t\t%d\n", name[i], &name[i], length[i]);
	}

	fclose(fInput);
  
	return 0;
}

void sort(int n, char *namePtr[])
{
    char *temp;

    for (int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++)
        {
            if (strlen(namePtr[i]) > strlen(namePtr[j]))
            {
                temp = *(namePtr + i);
                *(namePtr + i) = *(namePtr + j);
                *(namePtr + j) = temp;
            }
        }
    }
}