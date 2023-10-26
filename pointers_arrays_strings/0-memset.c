#include <stdio.h>

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with b.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte used for filling.
 * @n: The number of bytes to be filled with the constant byte.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s;
}
