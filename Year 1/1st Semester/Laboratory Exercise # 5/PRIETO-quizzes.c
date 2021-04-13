/*
 *	NAME:	PRIETO, John Patrick M.
 *	BLOCK:	BSCS-1B
 *	DATE:	October 18, 2020
 *	TITLE:	Exercise for Lecture 6
 *
 *	This program will get an input from the keyboard five pairs of integer values representing the five quizzes wherein 
 *	each pair of input values corresponds to the TOTAL POINTS of a given quiz and the SCORE of the student got in that quiz.
 *	It will compute for the percentage of each quiz, then the average percentage of all the quizzes.
 */
#define _CRT_SECURE_NO_WARNINGS		/*This statement is used exclusively for Visual Studio 2017 to bypass scanf error*/

#include <stdio.h>					/*Standard Input/Output header*/
int main() 
{
	/*Local Definitions*/
	int total_1, total_2, total_3, total_4, total_5;								/*Total Variables*/
	int score_1, score_2, score_3, score_4, score_5;								/*Score Variables*/
	float percentage_1, percentage_2, percentage_3, percentage_4, percentage_5;		/*Percentage Variables*/
	float percentage_average;														/*Average Percentage Variable*/

	/*Ask for Input*/
	printf("Please input five pairs of integer values representing the total and score of a student's quizzes. \n");
	printf("Input Quiz 1: ");
	scanf("%d %d", &total_1, &score_1);
	printf("Input Quiz 2: ");
	scanf("%d %d", &total_2, &score_2);
	printf("Input Quiz 3: ");
	scanf("%d %d", &total_3, &score_3);
	printf("Input Quiz 4: ");
	scanf("%d %d", &total_4, &score_4);
	printf("Input Quiz 5: ");
	scanf("%d %d", &total_5 , &score_5);
	
	/*Percentage Calculation*/
	percentage_1 = (float) score_1 / total_1 * 100;
	percentage_2 = (float) score_2 / total_2 * 100;
	percentage_3 = (float) score_3 / total_3 * 100;
	percentage_4 = (float) score_4 / total_4 * 100;
	percentage_5 = (float) score_5 / total_5 * 100;
	percentage_average = (percentage_1 + percentage_2 + percentage_3 + percentage_4 + percentage_5) / 5;

	/*Display*/
	printf(	"\n-------------------------------------\n"
			"QUIZ	SCORE	TOTAL	PERCENTAGE\n"
			"-------------------------------------\n");
	printf("1	%5d	%5d	%6.2f%% \n", score_1, total_1, percentage_1);
	printf("2	%5d	%5d	%6.2f%% \n", score_2, total_2, percentage_2);
	printf("3	%5d	%5d	%6.2f%% \n", score_3, total_3, percentage_3);
	printf("4	%5d	%5d	%6.2f%% \n", score_4, total_4, percentage_4);
	printf("5	%5d	%5d	%6.2f%% \n\n", score_5, total_5, percentage_5);
	printf("Quiz Percentage Average: %2.2f%%", percentage_average);

	return 0;
}

