/*
 *	NAME: PRIETO, John Patrick M.
 *	BLOCK: BSCS-1B
 *	DATE: February 15, 2021
 *	TITLE: Laboratory Exercise 1 | File Handling
 *	
 *	DESCRIPTION:
 *	This program will read from a file “activity1.in” five values corresponding to the
 *	grades in quizzes (25%), midterm exam (20%), final exam (25%), project (20%) and
 *	recitation (10%). It will then compute for the total grade based on the read values 
 *	and their given weights. Afterwards, it will get the equivalent grade point and 
 *	description. Lastly, it will output on the screen and on the file “activity1.out” 
 *	a report displaying the values read, actual grade and its description.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() 
{
	/*Local Definitions*/
	float quizzes;
	float midterm_exam;
	float final_exam;
	float project;
	float recitation;

	float total_grade;
	float grade_point;
	int description;

	char display[255];

	/*File Initialization*/
	FILE* fInput;
	FILE* fOutput;

	/*Read Input and Assign to Variables*/
	fInput = fopen("activity1.in", "r");

	if (fInput == NULL)
	{
		printf("Error! Unable to open input file. \n");
		return 1;
	}

	fscanf(fInput, "%f %f", &quizzes, &midterm_exam);
	fscanf(fInput, "%f", &final_exam);
	fscanf(fInput, "%f", &project);
	fscanf(fInput, "%f", &recitation);

	fclose(fInput);

	/*Total Grade Computation*/
	total_grade = ((quizzes * 0.25) + (midterm_exam * 0.20) + (final_exam * 0.25) + (project * 0.20) + (recitation * 0.10));

	/*Grade Point and Description Matrix*/
	if (total_grade >= 96)
	{
		grade_point = 1.00;
		description = "Outstanding";
	}
	else if (total_grade >= 91)
	{
		grade_point = 1.25;
		description = "Superior";
	}
	else if (total_grade >= 87)
	{
		grade_point = 1.50;
		description = "Very Satisfactory";
	}
	else if (total_grade >= 83)
	{
		grade_point = 1.75;
		description = "Very Satisfactory";
	}
	else if (total_grade >= 79)
	{
		grade_point = 2.00;
		description = "Satisfactory";
	}
	else if (total_grade >= 75)
	{
		grade_point = 2.25;
		description = "Satisfactory";
	}
	else if (total_grade >= 71)
	{
		grade_point = 2.50;
		description = "Fair";
	}
	else if (total_grade >= 65)
	{
		grade_point = 2.75;
		description = "Fair";
	}
	else if (total_grade >= 60)
	{
		grade_point = 3.00;
		description = "Fair";
	}
	else
	{
		grade_point = 5.00;
		description = "Fail";
	}

	/*Generate Output File*/
	fOutput = fopen("activity1.out", "w");

	fprintf(fOutput, "-------------------------------\n");
	fprintf(fOutput, "REQUIREMENT \t GRADE \t WEIGHT \n");
	fprintf(fOutput, "-------------------------------\n");

	fprintf(fOutput, "Quizzes \t %.2f \t 25%% \n", quizzes);
	fprintf(fOutput, "Midterm Exam \t %.2f \t 20%% \n", midterm_exam);
	fprintf(fOutput, "Final Exam \t %.2f \t 25%% \n", final_exam);
	fprintf(fOutput, "Project \t %.2f \t 20%% \n", project);
	fprintf(fOutput, "Recitation \t %.2f \t 10%% \n\n", recitation);

	fprintf(fOutput, "Total Grade: \t %.2f \n", total_grade);
	fprintf(fOutput, "Grade Point: \t %.2f \n", grade_point);
	fprintf(fOutput, "Description: \t %s \n", description);
	
	fclose(fOutput);

	/*Display Output File*/
	fOutput = fopen("activity1.out", "r");
	
	if (fOutput == NULL)
	{
		printf("Error! Unable to open output file. \n");
		return 1;
	}
	
	while (fgets(display, 255, fOutput) != NULL)
	{
		printf("%s", display);
	}
	
	fclose(fOutput);

	return 0;
}

