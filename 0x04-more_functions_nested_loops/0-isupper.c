#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @c: The letter  to be checked
 * Return: 1 for uppercase 0 for any other 
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
