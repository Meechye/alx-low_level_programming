#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to 
 * get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int count;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		count = exclusive >> i;
		if (count & 1)
			num++;
	}

	return (num);
}
