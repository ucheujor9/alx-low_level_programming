#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints all numbers from 0 to 9
 * Return: always 0
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
