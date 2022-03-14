#include <stdio.h>

/**
 * main - entry point for main function
 * Return: return 0 (success)
 */
int main(void)
{
char c;

for (c = 'a', c <= 'z';)
{
putchar(c); c++;
}
putchar(10);
return 0;
}
