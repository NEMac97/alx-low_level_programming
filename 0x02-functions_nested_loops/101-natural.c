#include <stdio.h>

/**
 * main- prints tge sum of natural numbers below 1024 that
 * are multiples of 3 and 5
 *
 * Return: Always zero (success)
 */

int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
