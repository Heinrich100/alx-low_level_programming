#include <stdio.h>
/**
 * main - prints all numbers of base 16
 *
 * Description: program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int a = 97;

	while (i <= 57)
	{
		putchar (i);
		i++;
	}
	while (a <= 102)
	{
		putchar (a);
		a++;
	}
	putchar (10);
	return (0);
}
