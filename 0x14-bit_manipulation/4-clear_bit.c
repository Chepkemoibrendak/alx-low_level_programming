#include "main.h"

/**
 * clear_bit - a function that sets the value of a
 * bit to 0 at a given index.
 * @n: parameter
 * @index: index
 * Return: 1 if it worked, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
