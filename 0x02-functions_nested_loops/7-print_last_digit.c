#include "main.h"

/**
 * print_last_digit - prins the last digit of a number
 * @n: an integer argument
 * Return: always 0.
 */

int print_last_digit(int n)
{
	int x;
	
	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);}
