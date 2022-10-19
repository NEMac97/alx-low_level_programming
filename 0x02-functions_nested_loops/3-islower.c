#include "main.h"

/**
 * _islower- check if character is lowercase
 *
 * @c:character- check if it is lowercase
 *
 * Return: 0- if lowecase, 1- if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
