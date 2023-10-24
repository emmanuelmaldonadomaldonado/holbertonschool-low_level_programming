#include "main.h"

/**
 * puts2 - Writes a character to stdout.
 * @str: value to check
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		_putchar('\n');
		i += 2;
	}
}
