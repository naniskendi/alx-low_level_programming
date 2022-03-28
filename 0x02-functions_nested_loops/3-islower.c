#include "main.h"

/**
 * main - check the code lowercase character.
 * @c: Ascii code character
 *
 * Return: Always 0 if it is not, 1 if it is lower.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');	
}

