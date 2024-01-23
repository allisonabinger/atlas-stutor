#include <stdio.h>
/**
 * main- entry point
 *
 * Return: void (always success)
*/
int main(void)
/* Function declaration ^ */
{
	int num = 5;
	/* variable declaration*/

	if (num < 10)
	/* conditional statement */
	{
		printf("The number %d is less than 10\n", num);
		/* print using the %d format specifier */
	}
	return (0);
	/* return statement using int (0) to indicate success */
}
