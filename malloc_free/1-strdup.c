#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL on failure or if str is NULL.
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}

