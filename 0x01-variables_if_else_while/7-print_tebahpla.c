#include <stdio.h>
/**
 * main - prints lowercase
 *
 * Description: program prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar (10);

	return (0);

}
