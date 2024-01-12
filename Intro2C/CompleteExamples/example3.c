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

	for (num = 0; num < 11; num++)
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
	}
}
