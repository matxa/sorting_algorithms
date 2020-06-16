#include "sort.h"

/**
* quick_sort - quick sort
* @array: array to be sorted
* @size: size of the array
* Return: VOID
*/

void quick_sort(int *array, size_t size)
{
    int low = array[0];
    int high = array[size - 1];

    quick_sort_helper(array, low, high);

}

void quick_sort_helper(int *array, int low, int high)
{
    int Lomuto_partition;

    if (low < high)
    {
        Lomuto_partition = partition(array, low, high);

        quick_sort_helper(array, low, Lomuto_partition - 1);
        quick_sort_helper(array, Lomuto_partition + 1, high);
    }
}

/**
* partition - partitioning function
* @array: array
* @low: min
* @high: max
* Return: a + 1
*/

int partition(int *array, int low, int high)
{
    int pivot = array[high];
    int a = low - 1;
    int b;
    int temp;

    for (b = low; b <= high - 1; b++)
    {
        if (array[b] < pivot)
        {
            a++;
            swap(&array[a], &array[b]);
        }
    }
    swap(&array[a + 1], &array[high]);
    return (a + 1);
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t; 
}
