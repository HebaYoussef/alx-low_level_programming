#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
	char *start = haystack;
	char *sub = needle;

	while (*haystack && *sub && (*haystack == *sub))
	{
	haystack++;
	sub++;
	}

	if (!*sub)
	return start;

	haystack = start + 1;
	}

	return NULL;
}

