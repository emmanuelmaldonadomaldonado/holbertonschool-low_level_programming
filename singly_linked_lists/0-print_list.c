#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", current->str);
		current = current->next;  /* Move to the next node */
		count++;  /* Increment the count */
	}
	return (count);  /* Return the total number of nodes */
}
