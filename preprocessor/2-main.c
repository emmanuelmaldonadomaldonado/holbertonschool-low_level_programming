#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the name of the file it was compiled from.
 *
 * Return: Always 0
 */
int main(void)
{
	const char *filename = __FILE;
	int i;

	for (i = 0; filename[i] != '\0'; i++)
	{
		putchar(filename[i]);
	}

	putchar('\n');
	return (0);
}
