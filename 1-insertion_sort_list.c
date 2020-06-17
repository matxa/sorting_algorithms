#include "sort.h"

/**
* insertion_sort_list - doubly linked list inserion sort
* @list: list to sort
* Return: VOID
*/

void insertion_sort_list(listint_t **list)
{
    listint_t **temp_list = list;
    listint_t **n1 = temp_list;
    listint_t *n2 = (*temp_list)->next;

    while ((*n1))
    {
        if ((*temp_list)->n > (*temp_list)->next->n)
        {
            (*temp_list)->prev->next = (*temp_list)->next;
            (*temp_list)->next->prev = (*temp_list)->prev;
            (*temp_list)->next = (*temp_list)->prev;

            (*temp_list)->next->prev->next = (*temp_list)->next->next;
            (*temp_list)->next->next->prev = (*temp_list)->next->prev;
            (*temp_list)->next->next = (*temp_list)->next->prev;

            (*temp_list)->prev = (*temp_list)->next->prev;
            (*temp_list)->next->prev = (*temp_list)->next;

            (*temp_list)->next = (*temp_list)->prev;
            (*temp_list)->next->next = (*temp_list)->next->prev;
        }
        (*temp_list) = (*temp_list)->next;
    }
}
