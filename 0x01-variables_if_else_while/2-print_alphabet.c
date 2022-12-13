#include <stdio.h>
/**
 * main - prints alphabet
 *
 * Description: program prints lower case alphabets using putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
