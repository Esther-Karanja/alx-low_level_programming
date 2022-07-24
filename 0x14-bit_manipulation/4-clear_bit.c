#include "main.h"
#include <string.h>

/**
 * clear_bit -  function that sets the value of a
 * bit to 0 at a given index
 * @n: pointer to the integer
 * @index: index to set to 0
 *
 * Return: 1 for success or -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;
	unsigned long int size;

	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);
	set = ~1 << index;
	*n = *n & set;
	return (1);
}
