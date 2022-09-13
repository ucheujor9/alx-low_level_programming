#include "main.h"

/**
 *  print_alphabet_x10 - prints 10 times the
 *  alphabet followed by a new line
 *  Return: 0 always
 */

void print_alphabet_x10(void)
{
	int k;
	int l;

	for (k = 0; k < 10; k++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
