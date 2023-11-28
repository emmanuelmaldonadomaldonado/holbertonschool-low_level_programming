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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif /* LISTS_H */

