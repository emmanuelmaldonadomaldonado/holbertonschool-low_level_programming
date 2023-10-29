#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all the arguments received
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
