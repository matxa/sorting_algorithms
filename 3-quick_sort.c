#include "sort.h"

/**
* quick_sort - quick sort
* @array: array to be sorted
* @size: size of the array
* Return: VOID
*/

void quick_sort(int *array, size_t size)
{
    int low = array[3];
    int high = array[size - 1];

    quick_sort_helper(array, low, high, size);

}

void quick_sort_helper(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int Lomuto_partition = partition(array, low, high, size);

        quick_sort_helper(array, low, Lomuto_partition - 1, size);
        quick_sort_helper(array, Lomuto_partition + 1, high, size);
        printf("in if (low < high)");
    }
}

/**
* partition - partitioning function
* @array: array
* @low: min
* @high: max
* Return: a + 1
*/

int partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int a = low - 1;
    int b;

    for (b = low; b <= high - 1; b++)
    {
        if (array[b] < pivot)
        {
            a++;
            swap(&array[a], &array[b]);
            print_array(array, size);
        }
    }
    swap(&array[a + 1], &array[high]);
    print_array(array, size);
    return (a + 1);
}

void swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
