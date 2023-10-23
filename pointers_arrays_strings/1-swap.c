#include "main.h"

/**
 * swap_int - Swaps the values
 * @a: The fist integer
 * @b: the second integer
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
