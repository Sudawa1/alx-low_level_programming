#include <stdio.h>
#include "lists.h"

/**
 *  * print_listint - prints all the elements of a listint_t list
 *   * @h: pointer to the start of the list
 *    *
 *     * Return: number of nodes in the list
 *      */
size_t print_listint(const listint_t *h)
{
	    const listint_t *current;
	        size_t node = 0;

		    current = h;

		        while (current != NULL)
				    {
					            printf("%d\n", current->n);
						            current = current->next;
							            node++;
								        }

			    return (count);
}

