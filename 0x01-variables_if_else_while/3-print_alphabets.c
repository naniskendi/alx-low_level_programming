#include <stdio.h>
/**
 * main - a program that writes alphabel in lower and uppercase
 * Return: return 0 (success)
 */
int main(void)
{
char n, m;
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
for (m = 'A'; m <= 'z'; m++)
{
putchar(m);
}
putchar(10);
return (0);
}
