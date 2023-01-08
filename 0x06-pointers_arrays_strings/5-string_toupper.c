#include "main.h"
#include <stdio.h>

/**
  * string_toupper - changes lowecase to uppercase
  * @s: string to be modified
  *
  * Return: char changed to uppercase
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if  (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
