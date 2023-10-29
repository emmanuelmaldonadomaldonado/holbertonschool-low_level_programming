#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all the arguments received, one per line.
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
