#include <stdio.h>
/**
 * main - a program that writes alphabel in lower and uppercase
 * Return: return 0 (success)
 */
int main(void)
{
char n , m;
for (n = 'a'; n <= 'z';)
{
putchar(n);
}
for (m = 'A'; m <= 'z';)
{
putchar(m);
}
return (0);
}
