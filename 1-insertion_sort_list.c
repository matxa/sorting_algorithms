#include "sort.h"

/**
* insertion_sort_list - doubly linked list inserion sort
* @list: list to sort
* Return: VOID
*/

void insertion_sort_list(listint_t **list)
{
    listint_t **temp_list = list;
    listint_t **temp_to_replace;

    while ((*list)->next != NULL)
    {
        if ((*temp_list)->n > (*temp_list)->next->n && (*temp_list)->prev->n < (*temp_list)->n)
        {
            (*temp_to_replace) = (*temp_list);
            (*temp_list) = (*temp_list)->next;
            (*temp_list)->next = (*temp_to_replace);
            print_list(*list);
        }
        (*temp_list) = (*temp_list)->next;
    }
}
