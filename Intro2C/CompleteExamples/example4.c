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

  while (num < limit)
  {
    printf("The number is %d, which is less than the limit: %d\n", num, limit);
    num++;
    sleep(1);
  }
  printf("You have reached the limit of %d!\n\n", limit);
}
