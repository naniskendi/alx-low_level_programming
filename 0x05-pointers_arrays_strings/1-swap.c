#include "main.h"

/**
 * swap_int - swaps integer values
 * @a: first value pointer
 * @b: second value pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp = *a;
	
*a = *b;
*b = temp;
}
	
