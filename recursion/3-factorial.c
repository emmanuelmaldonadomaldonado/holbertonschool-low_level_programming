#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of n, or -1 if n is less than 0 (error).
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);  /* Return -1 to indicate an error if n is less than 0. */
	}
	if (n == 0)
	{
		return (1);   /* Return 1 if n is 0 (base case: 0! = 1). */
	}
	return (n * factorial(n - 1));  /* Recursive call for n! = n * (n-1)! */
}
