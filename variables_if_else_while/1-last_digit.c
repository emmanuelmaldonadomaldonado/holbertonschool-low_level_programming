#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 * Return: 0
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	
	if (last > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, lastd);
	}
	if (lastd == 0)
	{
	printf("Last digit of %d is %d and is 0", n, lastd);
	}
	if (lastd < 6)
	{
	printf("Last digit of %d is %d and is less than 6", n, lastd);
	}
	return (0);
}
