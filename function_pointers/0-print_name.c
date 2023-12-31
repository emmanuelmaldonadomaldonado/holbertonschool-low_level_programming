#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @f: The function to format and print the name.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
