#include <stdio.h>
#include <unistd.h>
/**
 * main- entry point
 * 
 * Return: (success)
*/
int main(void)
{
	int num;
	int limit = 4;

	for (num = 0; num < limit; num++)
	{
		printf("the number %d, which is less than the limit: %d \n", num, limit);
		sleep(2);
	}

	return (0);
}
