#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print all the letters except q and e
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char alph, e, q;

	e = 'e';
	q = 'q';
	for (alph = 'a'; alph <= 'z'; alph++)
	{
	if (alph != e && alph != q)
	{
	putchar(alph);
	}
	}
	putchar('\n');
	return (0);
}
