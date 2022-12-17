#include <stdio.h>

int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 97; c <=122; c++)
		{
			putchar(c);
		}
		putchar(10);
	}
	return (0);
}
