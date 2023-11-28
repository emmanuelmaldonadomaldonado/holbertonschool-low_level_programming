#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list_t - singly linked list
 * @len: length of the string
 * @str: string data
 * @next: points to the next node in the list
 *
 * Description: singly linked list node structure
 */
typedef struct list_t
{
	char *str;
	size_t len;
	struct list_t *next;
} list_t;

/* Function prototype */
size_t print_list(const list_t *h);

#endif /* LISTS_H */

