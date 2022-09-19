#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string argument
 *
 * Desciption: prints a string
 * On success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + 1));
		i++;
	}
	putchar(10);
}
