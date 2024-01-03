#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: The first int
 * @b: The second int
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

