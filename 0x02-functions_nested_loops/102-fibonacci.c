#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int i;
	int n = 50;
	int a1 = 1;
	int a2 = 2;
	int a3 = a1 + a2;

	for (i = 1; i <= n; ++i)
	{
		printf("%d\n, ", a3);
		a1 = a2;
		a2 = a3;
		a3 = a1 + a2;
	}
	return (0);
}
