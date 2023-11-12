#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
    return a + b;
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
    return a - b;
}

/**
 * op_mul - Returns the product of a and b.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
    return a * b;
}

/**
 * op_div - Returns the result of the division of a by b.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The result of the division of a by b.
 */
int op_div(int a, int b)
{
    if (b != 0)
        return a / b;
    else
    {
        /* Handle division by zero */
        return 0; /* You might want to choose a different approach here */
    }
}

/**
 * op_mod - Computes the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of the division.
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return a % b;
}
