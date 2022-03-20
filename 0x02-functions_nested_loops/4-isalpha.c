#include "main.h"

/**
 * main- main function here
 * @c: The character to be checked
 * Return: return 0 
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{		
		return (0);
	}
}
