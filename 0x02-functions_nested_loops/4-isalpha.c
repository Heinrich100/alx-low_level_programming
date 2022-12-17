#include "main.h"

/**
 * _isalpha - checks for alphabet both uppercase & lowercase
 *@c: character to be checked
 *
 * Return: return 1 if both uppercase or lowercase & 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
