#include "main.h"

/**
  * leet - leet
  * @s: string
  *
  * Return: char value
  */

char *leet(char *s)
{
	char alphaArr[] = "a4A4e3o0o0t7t7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphaArr[j] != '\0'; j++)
		{
			if (s[i] == alphaArr[j])
			{
				s[i] = alphaArr[j + 1];
				break;
			}
		}
	}

	return (s);
}
