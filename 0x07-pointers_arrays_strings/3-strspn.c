#include "main.h"

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: the number of byte in initail s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found, count;
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	found = 0;

	for (j=0; accept[j] != '\0'; j++)
	{
	if (accept[j] == s[i])
	{
	found = 1;
	break;
	}
	}

	if (found == 0)
	{
	break;
	}
	count++;
	}
	return (count);
}

