#include "main.h"

/**
  * _strncpy - copy one string to another
  * @dest: destination string
  * @src: source string
  * @n: the copy limit
  *
  * Return: value of dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i, b = 0;

	while (src[b])
	{
		b++;
	}

	for (i = 0; i < n && src[i] != '\0', i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
