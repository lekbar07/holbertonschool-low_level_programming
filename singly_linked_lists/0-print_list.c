#include <stdio.h>
#include "lists.h"  // Assuming list_t is defined here

/**
 * print_list - Prints all elements of a list_t list.
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        if (h->str)
            printf("[%u] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");

        count++;
        h = h->next;
    }

    return (count);
}

