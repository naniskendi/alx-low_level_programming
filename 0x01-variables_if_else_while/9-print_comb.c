#include <stdio.h>
/**
 * main - main function start here
 * Return: return 0 (success)
 */
int main(void)
{
	int i;
	
	for (i = 48; i < 57; i++)
	{
		putchar(i);
		if (i != 57)
		{		
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
		
}
