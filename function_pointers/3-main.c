#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for the calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return 98; /* Return an error code */
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    operation = get_op_func(argv[2]);

    if (operation == NULL)
    {
        printf("Error\n");
        return 99; /* Return an error code */
    }

    result = operation(num1, num2);
    printf("%d\n", result);

    return 0;
}
