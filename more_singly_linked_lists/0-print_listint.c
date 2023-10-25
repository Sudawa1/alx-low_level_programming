#include <stdio.h>
#include <list.h>

/**
 *print_listint - prints all the elements of a listint_t list
 *return number of nodes 
 **/

{ 
	size_t print_listint(const listint_t *h)
		size_t nodes = 1;
	while(h != Null)
	{
		printf("a%d/n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);

}
