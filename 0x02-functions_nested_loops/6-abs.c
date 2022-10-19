#include "main.h"

/**
 * _abs-prints- absolute value of an integer
 *
 * @a:integer- computes the absolute value of an
 * an integer
 *
 * Return: returns the absvalue
 */

int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
