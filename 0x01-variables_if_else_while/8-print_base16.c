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
	char a, b;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	}
	for (b = 'a'; b	<= 'f'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
