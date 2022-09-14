#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * i = hour, j = minutes
 * Return: 24hours clock
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++);
	{
		fot (j = 0; j < 60; j++);
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
