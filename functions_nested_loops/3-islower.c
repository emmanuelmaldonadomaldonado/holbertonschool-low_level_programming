#include "main.h"

/**
 * _islower - Entry point
 * @c: value to analize
 *
 * Return: 1 when lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
