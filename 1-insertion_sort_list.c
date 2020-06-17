#include "sort.h"

/**
* insertion_sort_list - doubly linked list inserion sort
* @list: list to sort
* Return: VOID
*/

void insertion_sort_list(listint_t **list)
{
    listint_t *list_h = NULL;

    if (list == NULL || (*list)->next == NULL)
        return;

    list_h = (*list)->next;
    while (list_h)
    {
        while (list_h->prev && list_h->n < list_h->prev->n)
        {
            insertion_sort_helper(*list_h);
            print_list(*list_h);
        }
        list_h = list_h->next;
    }
}

void insertion_sort_helper(listint_t *node_to_move)
{
    list_h->prev->next = list_h->prev;
    if (list_h->next != NULL)
        list_h->next->prev = list_h->prev;

    list_h->next = list_h->prev;
    list_h->prev = list_h->prev->prev;
    list_h->next->prev = list_h;

    if (list_h->prev == NULL)
        *list == list_h;
    else
        list_h->prev->next = list_h;
}
