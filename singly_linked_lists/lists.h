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

/**
 * struct dlistint_s - doubly linked list
 * @n: integer data
 * @prev: points to the previous node in the list
 * @next: points to the next node in the list
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototype */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_dlistint(const dlistint_t *h);
#endif /* LISTS_H */

