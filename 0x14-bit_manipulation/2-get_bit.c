#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to return bit
 * @index: index, starting from 0 of the bit
 * Return: the value of the bit at index, or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= 64)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
