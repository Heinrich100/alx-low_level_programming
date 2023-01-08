#include "main.h"

/**
  * _strcat - concatenate two strings manually without
  * using strcat
  * @dest: The destination string
  * @src: source string
  *
  * Return: a pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int len, i;

	/*store length of dest in the len variable */
	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	/* concatenate src to dest */
	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[len] = src[i];
		len++;
	}
	/* terminating dest string */
	dest[len] = '\0';

	return (dest);
}
