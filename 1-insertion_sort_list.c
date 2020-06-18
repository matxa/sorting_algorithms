#include "sort.h"

/**
 * insertion_sort_list - doubly linked list inserion sort
 * @list: list to sort
 * Return: VOID
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL)
		return;

	listint_t *left;
	listint_t *right;
	listint_t *node = (*list)->next;

	while (node)
	{
		left = node->prev;
		right = node;
		while (right->prev && right->n < left->n)
		{
			node = swap_two_nodes(left, right, list);
			print_list(*list);
			if (right->prev == NULL)
				break;
			left = right->prev;
		}
		node = node->next;
		left = left->next;
	}
}

/**
 * swap_two_nodes - swap 2 nodes in a dubly linked list
 * @n_1: node to replace
 * @n_2: node replacing with
 * @list: list
 * Return: n_1
 */

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
