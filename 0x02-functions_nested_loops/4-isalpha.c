#include "main.h"

/**
 * _isalpha- check for alphabets
 *
 * @c:character- to check for alphabets
 *
 * Return: 0- if success, 1- if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
