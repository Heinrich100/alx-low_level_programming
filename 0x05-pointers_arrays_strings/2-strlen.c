#include "main.h"

/**
  * _strlen - function returns length of a string
  * @s: string to count
  *
  * Return: void
  */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
