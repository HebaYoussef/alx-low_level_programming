#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to search for
 * Return: A pointer to the byte in s or  NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{

	for (n = 0; accept[n] != '\0'; n++)
	{
	if (s[i] == accept[n])
	return (s + i);
	}

	}

	return (NULL);
}

