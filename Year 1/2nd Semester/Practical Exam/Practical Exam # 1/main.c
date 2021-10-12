/*	CS103 PRACTICAL EXAM 1				March 24,2021
	Name: PRIETO, John Patrick M.
	Block: BSCS-1B
*/

#include <stdio.h>

/* Write below the function prototypes/declarations for the five user-defined functions */
 //function declaration 1 (largest)
int largest(int arr[], int N, int index);
 //function declaration 2 (smallest)
int smallest(int arr[], int N, int index);
 //function declaration 3 (average)
int average(int arr[], int N);
 //function declaration 4 (above)
int above(int arr[], int N);
 //function declaration 5 (below)
int below(int arr[], int N);
 
 
/*Complete the function definition of main() */
int main(){
	//Write below the declaration of local variables
	int N;
	int arr[50];

	FILE *ifp;
	FILE *ofp;

	int index = 0;
	int small;

	//Write below the code for opening the input and output files
	ifp = fopen("prac1.in", "r");
	ofp = fopen("prac1.out", "w");
	 
	//Write below the code for reading the 1st integer as the size N of the array
	fscanf(ifp, "%d", &N);
	
	//Write below the selection to perform the specified tasks/operations based on the value of N 
	if (N <= 50 && N > 0)	//provide condition here
	{	//things to do if valid 
		printf("Elements of the array: \n");

		for (int i = 1; i < N; i++)
		{
			fscanf(ifp, "%d", &arr[i]);
			printf(" %d", arr[i]);
		}

		/*Print Largest*/
		index = largest(arr, N, index);
		largest(arr, N, index);
		printf("\n\nThe largest element in the array is %d at index %d. \n", arr[0], index);

		/*Print Smallest*/
		index = smallest(arr, N, index);
		smallest(arr, N, index);
		printf("The smallest element in the array is %d at index %d. \n", arr[0], index);

		/*Print Average*/
		average(arr, N);
		printf("The average of the values in the array is %d\n", arr[0]);

		/*Print Above*/
		above(arr, N);
		printf("There are %d integers above the average value \n", arr[0]);

		/* Print Below*/
		below(arr, N);
		printf("There are %d integers below the average value \n", arr[0]);
		
	}
	else
	{	//things to do if not valid
		printf("The input cannot be processed because the first integer should be a positive integer less than or equal to 50 \n");
	}
	
	//Write below the code to close the input and output files.
	fclose(ifp);
	fclose(ofp);
	 
	return 0;
}


/* Write below the function definition for finding the index of the element with the largest value in the array.(largest)*/
int largest(int arr[50], int N, int index)
{
	for (int i = 0; i < N; i++)
	{
		if (arr[0] < arr[i])
		{
			arr[0] = arr[i];
			index = i;
		}
	}
}

/* Write below the function definition for finding the index of the element with the smallest value in the array.(smallest)*/
int smallest(int arr[50], int N, int index)
{
	for (int i = 0; i < N; i++)
	{
		if (arr[0] > arr[i])
		{
			arr[0] = arr[i];
			index = i;
		}
	}
}

/* Write below the function definition for finding the average of the values in the array.(average)*/
int average(int arr[50], int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[0] = arr[0] + arr[i];
	}
	arr[0] = arr[0] / N;
}

/* Write below the function definition for finding the number of elements in the array that is above the computed average.(above)*/
int above(int arr[50], int N)
{
	arr[0] = 0;

	for (int i = 1; i < N; i++)
	{
		if (arr[0] < arr[i])
		{
			arr[0]++;
		}
	}
}

/* Write below the function definition for finding the number of elements in the array that is below the computed average.(below)*/
int below(int arr[50], int N)
{
	arr[0] = 0;

	for (int i = 1; i < N; i++)
	{
		if (arr[0] < arr[i])
		{
			arr[0]++;
		}
	}
}