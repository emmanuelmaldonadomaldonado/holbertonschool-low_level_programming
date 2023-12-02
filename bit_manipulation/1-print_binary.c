#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	/* Base case: If n is greater than 1, call recursively with right shift */
	if (n > 1)
		print_binary(n >> 1);

	/* Print the least significant bit using bitwise AND */
	_putchar((n & 1) ? '1' : '0');
}
