#include "sort.h"

/**
 * insertion_sort_list - doubly linked list inserion sort
 * @list: list to sort
 * Return: VOID
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *left;
	listint_t *right;
	listint_t *node = (*list)->next;

	while (node)
	{
		if (left->n > right->n)
		{
			node = swap_two_nodes(left, right, list);
			print_list(*list);
		}

        left = left->next;
		if (right->next != NULL)
			right = right->next;
	}
}

listint_t *swap_two_nodes(listint_t *n_1, listint_t *n_2, listint_t **list)
{
    if (n_1->prev)
		(n_1->prev)->next = n_2;
	else
		*list = n_2, n_2->prev = NULL;
	if ((n_2->next))
		(n_2->next)->prev = n_1;
	n_2->prev = n_1->prev;
	n_1->prev = n_2;
	n_1->next = n_2->next;
	n_2->next = n_1;
	return (n_1);
}
void insertion_sort_help(listint_t **list_h, listint_t *node_to_insert)
{
	listint_t *temp;
	if (*list_h == NULL)
	{
		*list_h = node_to_insert;
		print_list(*list_h);
	}
	else if ((*list_h)->n >= node_to_insert->n)
	{
		node_to_insert->next = *list_h;
		node_to_insert->next->prev = node_to_insert;
		*list_h = node_to_insert;
		print_list(*list_h);
	}
	else
	{
		temp = *list_h;
		while (temp->next != NULL &&
				temp->next->n < node_to_insert->n)
			temp = temp->next;
		node_to_insert->next = temp->next;
		if (temp->next != NULL)
			node_to_insert->next->prev = node_to_insert;
		temp->next = node_to_insert;
		node_to_insert->prev = temp;
		print_list(*list_h);
	}
}
