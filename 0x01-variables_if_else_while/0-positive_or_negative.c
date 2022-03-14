#include <stdio.h>
#include  <time.h>
#include <stdlib.h>

/**
 * main - This function checks whether a random number assigned to n
 * is positive or negative
 * Return: returns 0 success
 */
int main(void)
{
int n = 10 / 2;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive \n", n);
}
else if (n == 0)
{
printf("%d is zero \n", n);
}
else
{
printf("%d is negative \n", n);
}
return (0);
}

