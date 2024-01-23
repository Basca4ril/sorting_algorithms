#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list using bubble sort
 * @list: pointer to doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		tmp = curr;

		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;

			if (tmp->prev == NULL)
				*list = tmp;

			print_list(*list);
		}

		curr = curr->next;
	}
}
