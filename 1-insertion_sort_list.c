#include "sort.h"

/**
 * insertion_sort_list - sort doubly linked list using insertion sort algorithm
 * @list: object list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *hello, *world;

	if (!list || !(*list) || !(*list)->next)
		return;

	for (hello = *list; hello; hello = hello->next)
	{
		for (; hello->next && hello->n > hello->next->n; print_list(*list))
		{
			world = hello->next;
			hello->next = world->next;
			world->prev = hello->prev;
			if (hello->prev)
				hello->prev->next = world;
			if (world->next)
				world->next->prev = hello;
			hello->prev = world;
			world->next = hello;
			if (world->prev)
				hello = world->prev;
			else
				*list = world;
		}
	}
}
