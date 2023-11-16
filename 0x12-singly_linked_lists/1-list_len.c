#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @l: pointer to the list
 * Return: the number of elements
 **/

size_t list_len(const list_t *l)
	{
		size_t elements = 0;

		while (l)
		{
			elements++;
			l = l->next;
		}
		return (elements);
	}
