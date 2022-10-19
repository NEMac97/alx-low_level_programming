#include "main.h"

/**
 * print_sign- check the sign of a number
 *
 * @n:number- To check the sign of a number
 *
 * Return: 1- if sign greater than 1, -1- if less
 * than 1 and 0- if equal to zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
