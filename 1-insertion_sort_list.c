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
        insertion_sort_help(list_h, temp);
        temp = next;
    }
}

void insertion_sort_help(listint_t **list_h, listint_t node_to_insert)
{
    listint_t current;
    if (*list_h == NULL)
        *list_h = node_to_insert;
    else if ((*list_h)->data >= node_to_insert->data)
    {
        node_to_insert->next = *list_h;
        node_to_insert->next->prev = node_to_insert;
        *list_h = node_to_insert;
    }
    else
    {
        current = *list_h;
        while (current->next != NULL &&
               current->next->data < node_to_insert->data)
            current = current->next;
        node_to_insert->next = current->next;
        if (current->next != NULL)
            node_to_insert->next->prev = node_to_insert;
        current->next = node_to_insert;
        node_to_insert->prev = current;
    }
    print_list(list);
}
