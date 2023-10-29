#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the name of the program followed by a newline.
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
