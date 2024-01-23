#include <stdio.h>
#include <unistd.h>
/**
 * main- entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	int num = 0;
	int limit = 10;
	/* delcares and assigns values to variables num and limit */

	while (num < limit)
	/* complete this loop until the condition is met */
	{
		printf("The number is %d, which is less than the limit: %d\n", num, limit); /* prints */
		num++; /* increments num */
		sleep(1); /* waits one second for loop */
	}
	printf("You have reached the limit of %d!\n\n", limit); /* prints once outside of loop */
	return (0); /* returns int value to indiciate success */
}
