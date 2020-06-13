#include "sort.h"

/**
* insertion_sort_list - doubly linked list inserion sort
* @list: list to sort
* Return: VOID
*/

void insertion_sort_list(listint_t **list)
{
    const int temp_int;

    while (list != NULL)
    {
        if ((*list)->n < (*list)->next->n)
        {
            temp_int = (*list)->n;
            (*list)->n = (*list)->next->n;
            (*list)->next->n = temp_int;
            print_list(*list);
        }
        temp_head = temp_head->next;
    }
}
