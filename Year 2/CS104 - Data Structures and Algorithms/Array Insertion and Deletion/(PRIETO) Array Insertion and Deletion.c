/*
 *  NAME:  PRIETO, John Patrick M.
 *  BLOCK: BSCS-2B
 *  DATE:  October 13, 2021
 *  TITLE: Laboratory Exercise 1 | String Operations & Word Processing
 *	
 *  DESCRIPTION:
 *  - This program will demonstrate the different String Operations and Word Processing. 
 *  - STRING OPERATIONS: (1) Substrings   (2) Indexing   (3) Concatenation    (4) Length
 *  - WORD PROCESSING:   (1) Insertion    (2) Deletion   (3) Replacement
 */

// Headers
#include <stdio.h>
#include <string.h>

// Definitions
#define LINEBREAK ("------------------------------------------------------------\n")
#define MAXLENGTH 500

// Functions | Main
void selection();
void repeatSelection();
int repeatFunction(int *choice);

// Functions | String Operations
void substring();
void indexing();
void concatenation();
void length();

// Functions | Word Processing
void insertion();
void deletion();
void replacement();

int main() 
{
    // Start of Program
    printf("%s", LINEBREAK);
    printf("\t\t\tString Operations and Word Processing\n");
    printf("%s", LINEBREAK);      
    
    // Select which Operation/Process
    selection();

    // End of Program
    printf("%s", LINEBREAK);
    printf("\t\t\t\t\tProgram Terminated\n");
    printf("%s", LINEBREAK);

    return 0;
}

void selection()
{
    // Variables | Selection
    int choice;
    
    // Choices
    printf("- STRING OPERATIONS\n");
    printf("[1] Substring\n");
    printf("[2] Indexing\n");
    printf("[3] Concatenation\n");
    printf("[4] Length\n\n");

    printf("- WORD PROCESSING\n");
    printf("[5] Insertion\n");
    printf("[6] Deletion\n");
    printf("[7] Replacement\n\n");

    // Ask for selection
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Check for number validity
    while (choice < 1 || choice > 7)
    {
        printf("\nPlease enter a valid number from the choices: ");
        scanf("%d", &choice);
    }

    // Function Operation
    switch(choice)
    {
        case 1:
            substring();
            break;
        case 2:
            indexing();
            break;
        case 3:
            concatenation();
            break;
        case 4:
            length();
            break;
        case 5:
            insertion();
            break;
        case 6:
            deletion();
            break;
        case 7:
            replacement();
            break;
    }
}

void repeatSelection()
{
    // Variables | Repeat
    int choice;
    
    // Choices  
    printf("Would you like to try ANOTHER operation/process?\n");
    printf("[1] Yes\n");
    printf("[2] Exit\n\n");
    scanf("%d", &choice);

    // Check for number validity
    while (choice > 2 || choice < 0)
    {
        printf("Please enter a valid number from the choices");

        scanf("%d", &choice);
    }

    // Process
    if (choice == 1)
    {
        printf("%s", LINEBREAK);
        selection();
    }
}

int repeatFunction(int *choice)
{
    // Choices
    printf("\nWould you like to try THIS operation/process again?\n");
    printf("[1] Yes\n");
    printf("[2] No\n\n");

    printf("Enter your choice: ");
    scanf("%d", choice);
    printf("%s", LINEBREAK);

    return *choice;
}

void substring()
{
    // Variables | Substring
    int choice;
    int position;
    int length;
    int loop;

    char string[MAXLENGTH];
    char substring[MAXLENGTH];
    
    // Start of Substring
    printf("%s", LINEBREAK);
    printf("\t\t\t\tString Operation: Substring\n");
    printf("%s", LINEBREAK);

    // Process
    do
    {
        // Ask for Input
        printf("Enter a word: ");
        scanf("%s", string);



        // Ask if repeat function
        repeatFunction(&loop);
    }
    while (loop == 1);

    // End of Substring
    repeatSelection();
}

void indexing()
{
    
    repeatSelection();
}

void concatenation()
{

    repeatSelection();
}

void length()
{

    repeatSelection();
}

void insertion()
{

    repeatSelection();
}

void deletion()
{

    repeatSelection();
}

void replacement()
{

    repeatSelection();
}
