#include <stdio.h>
#include <stdlib.h>

/**
 * main - This prints the alhpabets
 *
 * Description: Programm to print alphabets 10 times using putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int rollover = 0;

	while (rollover < 10)
	{
		int i = 97;

		while (i < 123)
		{
			putchar(i);
			i++;
		}
	putchar(10);
	rollover++;
	}
	return (0);
}
