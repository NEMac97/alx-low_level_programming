#include <stdio.h>

/**
 * main- prints fizzbuzz for multiples of 3 & 5,
 * fizz for multiples of 3
 * Buzz for multiples of 5
 * the numbwr for neither
 *
 * Return: Always zero (success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}

