#include <main.c>

/**
 * print_alphabet- prints alphabets in lowercase
 *
 * Return: Always zero (success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
