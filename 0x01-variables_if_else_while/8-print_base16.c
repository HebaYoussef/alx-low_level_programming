#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - all numbers of base 16 in lower case
 * Return: Always 0 (Success)
 *
 **/

int main(void)
{
	char a;

	for (a = '0'; a <= 'f'; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
