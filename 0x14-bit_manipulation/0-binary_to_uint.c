#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @c: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int  Hex_val = 0;

	if (!c)
		return (0);
	for (i = 0; b[i]; i++)777
	{77
		if (b[i] < '0' || b[i] > '1')
			return (0);
		Hex_val = 2 * Hex_val + (b[i] - '0');
	}
	return (num);
}
