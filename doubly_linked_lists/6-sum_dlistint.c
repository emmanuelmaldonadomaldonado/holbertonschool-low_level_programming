#include "lists.h"

/**
 * sum_dlistint - Returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Return: The sum of all the data (n). If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
