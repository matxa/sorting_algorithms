#include "sort.h"

/**
* insertion_sort_list - doubly linked list inserion sort
* @list: list to sort
* Return: VOID
*/

void insertion_sort_list(listint_t **list)
{
    listint_t temp_head = **list;
    const int temp_int;

    while (temp_head != NULL)
    {
        if (temp_head->n < temp_head->next->n)
        {
            temp_int = temp_head->n;
            temp_head->n = temp_head->next->n;
            temp_head->next->n = temp_int;
            print_list(*list);
        }
        temp_head = temp_head->next;
    }
}
