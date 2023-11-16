#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @l:pointer to the list
 * Return: the number of nodes
 **/

size_t print_list(const list_t *l)
{
	const list_t *cursor = l;
	size_t count = 0;

	while (cursor != NULL)
	{
		if (cursor->str != NULL)
			printf("[%d] %s\n", cursor->len, cursor->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		cursor = cursor->next;
	}

	return (count);
}
