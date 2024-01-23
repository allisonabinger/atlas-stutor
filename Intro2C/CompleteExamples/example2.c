#include <stdio.h>
/**
 * main- entry point
 *
 * Return: void (always success)
*/
int main(void)
{
	int num = 5;
	/* variable declaration */

	if (num < 3)
	/* conditional statement */
	{
		printf("The number %d is less than 3\n", num);
		/* print using %d format specifier */
	}
	else if (num > 6)
	{
		printf("The number %d is greater than 6\n", num);
		/* print using %d format specifier */
	}
	else
	{
		printf("The number %d is between 3 and 6\n", num);
		/* print using %d format specifier */
	}
	return (0);
}

