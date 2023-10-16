#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            printf("%d, %d", i, j);

            // Print a newline if it's the last combination
            if (i == 9 && j == 9)
            {
                printf("\n");
            }
            else
            {
                printf(", ");
            }
        }
    }

    return 0;
}

