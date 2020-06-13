#include "sort.h"

/**
* insertion_sort_list - doubly linked list inserion sort
* @list: list to sort
* Return: VOID
*/

void insertion_sort_list(listint_t **list)
{
    while (list != NULL)
    {
        print_list(*list);
        **list = **list->next;
    }
}
