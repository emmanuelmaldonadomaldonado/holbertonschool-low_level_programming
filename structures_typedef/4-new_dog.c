#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog_t, or NULL if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p;

    /* Reserving memory for struct */
    p = malloc(sizeof(dog_t));
    if (p == NULL)
        return (NULL);

    /* Allocating memory for name and copying content */
    p->name = strdup(name);
    if (p->name == NULL)
    {
        free(p);
        return (NULL);
    }

    /* Allocating memory for owner and copying content */
    p->owner = strdup(owner);
    if (p->owner == NULL)
    {
        free(p->name);
        free(p);
        return (NULL);
    }

    p->age = age;

    return (p);
}
