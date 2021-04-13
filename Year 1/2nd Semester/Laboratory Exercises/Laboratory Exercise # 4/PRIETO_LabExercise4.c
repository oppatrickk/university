/*
 *	NAME: PRIETO, John Patrick M.
 *	BLOCK: BSCS-1B
 *	DATE: March 17, 2021
 *	TITLE: Laboratory Exercise 4 | Multiple Subscripted Arrays
 *	
 *	DESCRIPTION:
 *	- This program will perform addition, subtraction, or multiplication of two matrices.
 *	- The matrices will be read from two input files 'matrix_A.in' and 'matrix_B.in'
 *	- The 1st and 2nd integer values read from the file represents the row and column
 *	  dimensions of the matrix, respectively.
 *	- The program will check if the dimension of the two matrices are compatible to the
 *	  preferred operation specified by user.
 *	- The program will output on the screen the two input matrices and the result of the matrix operation.
 *	- The program will print on the output file 'matrix_AB.out' the dimension and values
 *	  of the matrix resulting from the operation.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*Functions*/
void addition(int matrix_A[10][10], int matrix_B[10][10], int sum[10][10], int row_A, int column_A);
void subtraction(int matrix_A[10][10], int matrix_B[10][10], int difference[10][10], int row_A, int column_A);
void multiplication(int matrix_A[10][10], int matrix_B[10][10], int product[10][10], int row_A, int column_A, int column_B);

/*Main Function*/
int main() 
{
	/*Local Definitions*/
	int row_A, row_B;
	int column_A, column_B;
	int choice;

	int matrix_A[10][10];
	int matrix_B[10][10];

	int sum[10][10];
	int difference[10][10];
	int product[10][10];

	/*File Definition*/
	FILE *fInput_A;
	FILE *fInput_B;
	FILE *fOutput_AB;

	/*Retrieve and Assign Input Values for Matrix A*/
	fInput_A = fopen("matrix_A.in", "r");

	fscanf(fInput_A, "%d", &row_A);
	fscanf(fInput_A, "%d", &column_A);

	for (int i = 0; i < row_A; i++)
	{
		for (int j = 0; j < column_A; j++)
		{
			fscanf(fInput_A, "%d", &matrix_A[i][j]);
		}
	}

	fclose(fInput_A);

	/*Retrieve and Assign Input Values for Matrix B*/
	fInput_B = fopen("matrix_B.in", "r");

	fscanf(fInput_B, "%d", &row_B);
	fscanf(fInput_B, "%d", &column_B);

	for (int i = 0; i < row_B; i++)
	{
		for (int j = 0; j < column_B; j++)
		{
			fscanf(fInput_B, "%d", &matrix_B[i][j]);
		}
	}

	fclose(fInput_B);
	
	/*Print Matrix A*/
	printf("Matrix A \n");

	for (int i = 0; i < row_A; i++)
	{
		for (int j = 0; j < column_A; j++)
		{
			printf(" %d", matrix_A[i][j]);
		}
		printf("\n");
	}

	/*Print Matrix B*/
	printf("\nMatrix B \n");

	for (int i = 0; i < row_B; i++)
	{
		for (int j = 0; j < column_B; j++)
		{
			printf(" %d", matrix_B[i][j]);
		}
		printf("\n");
	}

	fclose(fInput_B);

	/*Print the Operation Choices*/
	printf
	(
		"\nMatrix Operations: \n"
		"[1] Addition \n"
		"[2] Subtraction \n"
		"[3] Multiplication \n\n"
	);

	/*Ask for the preffered operation*/
	printf("Enter the Number of your choice: ");
	scanf("%d", &choice);

	/*Passing Values*/
	addition(matrix_A, matrix_B, sum, row_A, column_A);
	subtraction(matrix_A, matrix_B, difference, row_A, column_A);
	multiplication(matrix_A, matrix_B, product, row_A, column_A, column_B);

	/*Display to Screen and Generate Output File*/
	fOutput_AB = fopen("matrix_AB.out", "w");

	fprintf(fOutput_AB, "%d\t", row_A);
	fprintf(fOutput_AB, "%d\n\n", column_B);

	switch (choice)
	{
		case 1:
		{
			if (row_A == row_B && column_A == column_B)
			{
				printf("\nMatrix A + B \n");

				for (int i = 0; i < row_A; i++)
				{
					for (int j = 0; j < column_A; j++)
					{
						printf("%3d ", sum[i][j]);
						fprintf(fOutput_AB, "%d\t", sum[i][j]);
					}
					printf("\n");
					fprintf(fOutput_AB, "\n");
				}
			}
			else
			{
				printf("\nMatrix A and B are not conformable for addition operation. \n");
			}
			break;
		}
		case 2:
		{
			if (row_A == row_B && column_A == column_B)
			{
				printf("\nMatrix A - B \n");
				
				for (int i = 0; i < row_A; i++)
				{
					for (int j = 0; j < column_A; j++)
					{
						printf("%3d ", difference[i][j]);
						fprintf(fOutput_AB, "%d\t", difference[i][j]);
					}
					printf("\n");
					fprintf(fOutput_AB, "\n");
				}
			}
			else
			{
				printf("\nMatrix A and B are not conformable for subtraction operation. \n");
			}
			break;
		}
		case 3:
		{
			if (column_A == row_B)
			{
				printf("\nMatrix A x B \n");

				for (int i = 0; i < row_A; i++)
				{
					for (int j = 0; j < column_B; j++)
					{
						printf("%3d ", product[i][j]);
						fprintf(fOutput_AB, "%d\t", product[i][j]);
					}
					printf("\n");
					fprintf(fOutput_AB, "\n");
				}
			}
			else
			{
				printf("\nMatrix A and B is not compatible for multiplication operation. \n");
			}
			break;
		}
		default:
		{
			printf("Error! Please enter a number from the choices.");
		}
	}

	fclose(fOutput_AB);

	return 0;
}	/* End of Main Function*/

/*Addition Function*/
void addition(int matrix_A[10][10], int matrix_B[10][10], int sum[10][10], int row_A, int column_A)
{
	for (int i = 0; i < row_A; i++)
	{
		for (int j = 0; j < column_A; j++)
		{
			sum[i][j] = matrix_A[i][j] + matrix_B[i][j];
		}
	}
}

/*Subtraction Function*/
void subtraction(int matrix_A[10][10], int matrix_B[10][10], int difference[10][10], int row_A, int column_A)
{
	for (int i = 0; i < row_A; i++)
	{
		for (int j = 0; j < column_A; j++)
		{
			difference[i][j] = matrix_A[i][j] - matrix_B[i][j];
		}
	}
}

/*Multiplication Function*/
void multiplication(int matrix_A[10][10], int matrix_B[10][10], int product[10][10], int row_A, int column_A, int column_B)
{	
	for (int i = 0; i < row_A; ++i)
	{
		for (int j = 0; j < column_B; ++j)
		{
			product[i][j] = 0;
		}
	}

	for (int i = 0; i < row_A; i++)
	{
		for (int j = 0; j < column_B; j++)
		{
			for (int k = 0; k < column_A; k++)
			{
				product[i][j] += matrix_A[i][k] * matrix_B[k][j];
			}
		}
	}
}