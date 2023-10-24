#include <stdio.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: The input string
 *
 */

void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	int start_index = length / 2;

	while (str[start_index] != '\0')
	{
		putchar(str[start_index]);
		start_index++;
	}
	putchar('\n');
}
