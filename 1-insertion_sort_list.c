#include "sort.h"

/**
* insertion_sort_list - doubly linked list inserion sort
* @list: list to sort
* Return: VOID
*/

void insertion_sort_list(listint_t **list)
{
    listint_t current_int = list->n;
    listint_t temp_next_int = list->next->n;
    listint_t temp_int;


    while (list != NULL)
    {
        if (current_int < temp_next_int)
        {
            temp_int = current_int;
            current_int = temp_next_int;
            temp_next_int = temp_int;
            print_list(*list);
        }
    }
}
