#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number that sets the value of a bit
 * @index: is the index, starting from 0 of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
