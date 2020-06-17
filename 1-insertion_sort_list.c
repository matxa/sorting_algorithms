#include "sort.h"

/**
* insertion_sort_list - doubly linked list inserion sort
* @list: list to sort
* Return: VOID
*/

void insertion_sort_list(listint_t **list)
{
    listint_t *list_h = NULL;
    listint_t *temp = *list;
    listint_t *next;

    while (temp)
    {
        next = temp->next;
        temp->prev = temp->next = NULL;

        insertion_sort_help(&list_h, temp);
        temp = next;
    }
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
        while (temp->next != NULL && temp->next->n < node_to_insert->n)
            temp = temp->next;

        node_to_insert->next = temp->next;
        if (temp->next != NULL)
            node_to_insert->next->prev = node_to_insert;

        temp->next = node_to_insert;
        node_to_insert->prev = temp;
        print_list(*list_h);
    }
}
