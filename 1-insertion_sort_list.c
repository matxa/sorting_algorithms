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

    while ((*list)->next != NULL)
    {
        if ((*temp_list)->n > (*temp_list)->next->n)
        {
            (*n1)->prev->next=n2;
            n2->next->prev=(*n1);
            (*n1)->next=n2->next;
            n2->prev=(*n1)->prev;
            (*n1)->prev=n2;
            n2->next=(*n1);
        }
        (*n1) = (*n1)->next;
    }
}
