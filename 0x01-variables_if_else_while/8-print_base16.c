#include <stdio.h>

/**
 *  main - prints all numbers in base 16 in lowercase
 *  followed by a new line
 *  Return: always 0 (success)
 */

int main(void)
{
	int n;
	char ch;

	for (n = 40; n < 50; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
