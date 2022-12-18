#include "main.h"

/**
 * jack_bauer - prints every minute
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a, b, c, d;

<<<<<<< HEAD
	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(58);
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
=======
	for (a = 0; b <= 9; b++)
	{
		if ((a <= 1 && b <= 9) || (a <= 2 && b <=3))
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(58);
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
>>>>>>> 6b3b000c66ea5dafa5c3d689b0beaba0266c6da3
				}
			}
		}
	}
<<<<<<< HEAD
=======
}
>>>>>>> 6b3b000c66ea5dafa5c3d689b0beaba0266c6da3
