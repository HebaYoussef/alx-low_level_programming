#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  prints the lowercase alphabet in reverse
 * return: Always 0 (success)
 *
 **/

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}