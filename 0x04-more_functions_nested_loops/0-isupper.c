#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 *
 * @c: input character
 *
 * Return: 1 - if uppercase, 0 - if lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
