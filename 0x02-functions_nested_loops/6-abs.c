#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: The number to be computed.
 *
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_res;

		abs_res = c * -1;
		
		return (abs_res);
	}

	return (c);
}
