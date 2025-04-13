#include "sort.h"

/**
 * insertion_sort_list - Sort a list in ascending order
 * @list: Pointer to the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *prev;
	listint_t *tmp;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		tmp = current;
		current = current->next;

		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			prev = tmp->prev;

			if (prev->prev)
				prev->prev->next = tmp;

			tmp->prev = prev->prev;
			prev->next = tmp->next;
			
			if (tmp->next)
				tmp->next->prev = prev;
			
			tmp->next = prev;
			prev->prev = tmp;

			if (!tmp->prev)
				*list = tmp;

			print_list(*list);
		}
	}
}

