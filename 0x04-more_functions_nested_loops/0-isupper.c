#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @x: The letter  to be checked
 * Return: 1 for uppercase 0 for lower case 
 **/

int _isupper(int x)
{
	if (x >= 65 && x <= 98)
	{
	return(1);
	}
	return(0);
}
