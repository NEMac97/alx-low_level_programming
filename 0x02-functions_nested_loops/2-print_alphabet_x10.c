#include "main.h"

/**
 * print_alphabet_x10- prints lower case
 * alphabets 10times
 *
 * Return: Always zero (success)
 */

void print_alphabet_x10(void)
{
	char i, k;

	for (k = 0; k < 10; k++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
	return (0);
}
