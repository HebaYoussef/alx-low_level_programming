#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

 	while (i < 10) /* This line starts the infinite loop */
	{
		/*putchar(i);*/ /* This line prevents the loop from terminating */
	}
 	
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

