#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - 102-print_comb5.c
 * Return: . Always 0 (Success)
 *
 **/

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
	for (b = a + 1; b <= 99; b++)
	{
	putchar((a / 10) + '0');
	putchar((a % 10) + '0');
	putchar(' ');
	putchar((b / 10) + '0');
	putchar((b % 10) + '0');
	if (a == 98 && b == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}