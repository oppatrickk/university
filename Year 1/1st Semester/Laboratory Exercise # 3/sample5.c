#include <stdio.h>
int main(void)
{
	/*Local Definitons*/
	int a = 5;
	int b = -3;

	/*Statements*/
	printf("%2d < %2d is %2d\n", a, b, a < b);
	printf("%2d == %2d is %2d\n", a, b, a == b);
	printf("%2d != %2d is %2d\n", a, b, a != b);
	printf("%2d > %2d is %2d\n", a, b, a > b);
	printf("%2d <= %2d is %2d\n", a, b, a <= b);
	printf("%2d >= %2d is %2d\n", a, b, a >= b);
	
	return 0;
}	/*main*/