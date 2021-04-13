/*
 *	NAME: PRIETO, John Patrick M.
 *	BLOCK: BSCS-1B
 *	DATE: April 11, 2021
 *	TITLE: Laboratory Exercise 5 | Strings
 *
 *	DESCRIPTION:
 *
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAXLENGTH 100

void pluralize(char noun[]);

int main()
{
	/*Local Definitions*/
	char noun_singular[MAXLENGTH];
	char noun_plural[MAXLENGTH];

	/*File Defintion*/
	FILE *fInput;

	/*Statements*/
	if (!(fInput = fopen("singular_words.in", "r")))
	{
		printf("Error! File not found \n");
		return 1;
	}
	else
	{
		printf("Singular Strings read from the file and their plural form: \n");
	}

	while (fscanf(fInput, "%s", noun_singular) == 1)
	{
		strcpy(noun_plural, noun_singular);

		pluralize(noun_plural);

		printf("\t %s - %s \n", noun_singular, noun_plural);
	}

	fclose(fInput);

	return 0;
}

void pluralize(char noun[])
{
	char vowel[6] = { "aeiou" };
	char consonant[5] = { "sxz" };

	int lengthNoun = strlen(noun);
	int lengthVowel = strlen(vowel);
	int lengthConsonant = strlen(consonant);

	if (noun[lengthNoun - 1] == 'y')
	{
		for (int i = 5; i >= 0; --i)
		{
			if (noun[lengthNoun - 2] == vowel[lengthVowel - i])
			{
				strcat(noun, "s");
				noun[lengthNoun + 2] = '\0';
				break;
			}
			else
			{
				noun[lengthNoun - 1] = '\0';
				strcat(noun, "ies");
				noun[lengthNoun + 2] = '\0';
				break;
			}
		}
	}
	else
	{
		for (int i = 4; i >= 0; --i)
		{
			if (noun[lengthNoun - 1] == consonant[lengthConsonant - i])
			{
				strcat(noun, "es");
				noun[lengthNoun + 2] = '\0';
				break;
			}
			else
			{
				strcat(noun, "s");
				noun[lengthNoun + 2] = '\0';
				break;
			}
		}

	}
}
