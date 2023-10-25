#include "main.h"

/**
 * _strncat - Concatenate two strings, limiting the number of bytes.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes from src to append.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);
}

