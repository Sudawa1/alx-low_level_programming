#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: value
 * @index: index
 * Return: 1 if it has  worked,and  -1 if an error is commited
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}