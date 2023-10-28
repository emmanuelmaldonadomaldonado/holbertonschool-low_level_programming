#include "main.h"

/**
 * _pow_recursion - Calculates x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: x to the power of y, or -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return -1;  /* Return -1 to indicate an error if y is less than 0. */
	}
	if (y == 0)
	{
		return 1;   /* Return 1 if y is 0 (base case: x^0 = 1). */
	}
	return x * _pow_recursion(x, y - 1);  /* Recursive call for x^y = x * x^(y-1). */
}

