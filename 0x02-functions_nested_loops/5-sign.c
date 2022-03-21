#include "main.h"

/**
 * main - this function that prints the sign of a number
 * @n: number to be checked.
 * Returns: 1 and prints + if n is greater than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}	
