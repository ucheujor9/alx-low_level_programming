#include "main.h"

/**
 * times_table - prints the 9 times table, starting
 * with 0
 * row is row, col is column, d is digits of result
 * Return: times table
 */

void times_table(void)
{
	int row, col, d;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		
		for (col = 1; col <= 9; col++)
		{
			d = (row * col);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
