#include <stdio.h>
/**
 * main -prints single digits
 *
 * Description: program prints single digits starting from zero
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar (10);

	return (0);
}
