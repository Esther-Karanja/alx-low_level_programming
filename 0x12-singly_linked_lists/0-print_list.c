#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the first element of the list
 *
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		i++;
	}

	return (i);
}
