#include <stdio.h>
#include <unistd.h>
/**
 * main- entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	int num;
	/* declaring int variable with no value */

	for (num = 0; num < 11; num++)
	/* iteration, assigns value to num, limit for loop to stop, and increment amount */
	{
		if (num < 3)
		{
			printf("The number %d is less than 3\n", num);
		}
		else if (num > 6)
		{
			printf("The number %d is greater than 6\n", num);
		}
		else
		{
			printf("The number %d is between 3 and 6\n", num);
		}
		sleep(1);
		/* waits 1 second for loop to continue */
	}
	return (0);
	/* returns int value of 0, successful */
}
