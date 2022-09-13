#include "main.h"

/**
 *  _abs - computes the absolute value of an integer
 *  @n: an integer argument
 *  Return: 0 success
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
