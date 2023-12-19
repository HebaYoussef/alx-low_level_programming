#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 *
 **/

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
	for (b = a+1; b <= '9'; b++)
	{
	if (a != b)
	{
	putchar(a);
	putchar(b);
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}
