#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of multiples of 3 and 5 that are 
 * lower than 1024 excluded
 * Return: sum of multiples
 */

int main(void)
{
	int mul3 = 0;
	int mul5 = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			mul3 += i;
		}
		if (i % 5 == 0)
		{
			mul5 += i;
		}
	}
	printf("%d\n", mul3 + mul5);
	return (0);
}
