#include <stdio.h>
int main(void)
{
	/*Local Definitions*/
	int a = 5;
	int b = -3;
	int c = 0;

	printf(" %2d &&  %2d is %2d\n", a, b,  a &&  b);
	printf(" %2d &&  %2d is %2d\n", a, c,  a &&  c);
	printf(" %2d &&  %2d is %2d\n", c, a,  c &&  a);
	printf(" %2d ||  %2d is %2d\n", a, c,  a ||  c);
	printf(" %2d ||  %2d is %2d\n", c, a,  c ||  a);
	printf(" %2d ||  %2d is %2d\n", c, c,  c ||  c);
	printf("!%2d && !%2d is %2d\n", a, c, !a && !c);
	printf("!%2d &&  %2d is %2d\n", a, c, !a &&  c);
	printf(" %2d && !%2d is %2d\n", a, c,  a && !c);

}