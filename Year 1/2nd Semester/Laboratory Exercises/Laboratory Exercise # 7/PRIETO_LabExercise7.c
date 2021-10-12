/*
 *  NAME:  PRIETO, John Patrick M.
 *  BLOCK: BSCS-1B
 *  DATE:  May 12, 2021
 *  TITLE: Laboratory Exercise 7 | Structures
 *	
 *  DESCRIPTION:
 *  - This program will read a record of N students from a file "students.txt".
 *  - An array of structures will be used to store the student records.
 *  - The record will contain the following details: Name, Student Number, Age, and Gender.
 *  - It will then be grouped by gender and sorted alphabetically by name. 
 *  - Lastly, it will be written in an output file "organized.txt" and displayed on screen.
 */

#include <stdio.h>
#include <string.h>

#define MAXLENGTH 50
  
struct StudentRec
{
    char name[MAXLENGTH];
    int number;
    int age;
    char gender[MAXLENGTH];
};
typedef struct StudentRec Student;

void grouping(Student group[], Student list[], int studentNum, int *num, char gender[]);
void sorting(Student sort[], int num);

int main()
{
    /*Structures*/
    Student list[MAXLENGTH];
    Student male[MAXLENGTH];
    Student female[MAXLENGTH];

    /*Local Definitions*/
    int i;
    int studentNum;
    int maleNum;
    int femaleNum;
    char gender[MAXLENGTH];

    /*File Definitions*/
    FILE *fInput;
    FILE *fOutput;

    /*Retrieve Input*/
    if(!(fInput = fopen("students.txt", "r")))
	{
        printf("Error! File not found \n");
		return 1;
    }

    fscanf(fInput, "%d", &studentNum);
	
    for(i = 0; i < studentNum; i++) 
    {
        fscanf(fInput, "%s %d %d %c", list[i].name, &(list[i].number), &(list[i].age), list[i].gender);
  	}

    fclose(fInput);

    /*Grouping*/
    gender[0] = 'M';
    grouping(male, list, studentNum, &maleNum, gender);
    
    gender[0] = 'F';
    grouping(female, list, studentNum, &femaleNum, gender);

    /*Sorting*/
    sorting(male, maleNum);
    sorting(female, femaleNum);

    /*Display*/
    fOutput = fopen("organized.txt", "w");

    // Header
    fprintf(fOutput, "NAME\t\t#\tAGE\n");
    printf("NAME\t\t#\tAGE\n");
    
    fprintf(fOutput, "--------------------\n");
    printf("--------------------\n");
    
    // Male
    fprintf(fOutput, "MALE: \n");
    printf("MALE: \n");
    
    for(i = 0; i < maleNum; i++) 
    {
        fprintf(fOutput, "%-8s\t%.2d\t%.2d\n", male[i].name, male[i].number, male[i].age);
        printf("%-8s\t%.2d\t%.2d\n", male[i].name, male[i].number, male[i].age);
  	}

    // Female
    fprintf(fOutput, "\nFEMALE: \n");
    printf("\nFEMALE: \n");
    
    for(i = 0; i < femaleNum; i++) 
    {
        fprintf(fOutput, "%-8s\t%.2d\t%.2d\n", female[i].name, female[i].number, female[i].age);
        printf("%-8s\t%.2d\t%.2d\n", female[i].name, female[i].number, female[i].age);
  	}
    
    fclose(fOutput);

    return 0;
}

void grouping(Student group[], Student list[], int studentNum, int *num, char gender[]) 
{
    int j = 0;

    for(int i = 0; i < studentNum; i++) 
    {
        if (strcmp(list[i].gender, "F") && gender[0] == 'M')
        {
            group[j] = list[i];
            j += 1;
        }
        else if(strcmp(list[i].gender, "M") && gender[0] == 'F')
        {
            group[j] = list[i];
            j += 1;
        }
  	}

    *num = j;
}

void sorting(Student sort[], int num)
{
    Student temp[MAXLENGTH];

    for(int i = 0; i < num; i++)
    {
        for(int j = i + 1; j < num; j++)
        {
            if(strcmp(sort[i].name, sort[j].name) > 0)
            {
                temp[i] = sort[i];
                sort[i] = sort[j];
                sort[j] = temp[i];
            }
        }
    }
}