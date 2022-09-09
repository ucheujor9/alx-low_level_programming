#include <stdio.h>

/**
 *  main - prints possible combinations of single digit
 *  
 *  Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 40; n < 50; n++)
	{
		putchar(n);
		if (n != 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
