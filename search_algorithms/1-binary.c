#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array
 * using Binary Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);

			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
