#include <stdio.h>

/**
 *  main - prints all possible combinations of 2 two digits
 *  ranging from 0 to 99
 *  Return: always 0 (success)
 */

int main(void)
{
	int n, k;

	for (n = 0; n < 100; n++)
	{
		for (k = 0; k < 100; k++)
		{
			if (n < k)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				if (n != 98 || k != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
