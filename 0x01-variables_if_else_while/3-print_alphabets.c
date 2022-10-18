#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always zero (success)
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a', j = 'A'; i <= 'z', j <= 'Z'; i++, j++)
	{
		putchar(i);
		putcahr(j);
	}
	putchar('\n');
	return (0);
}
