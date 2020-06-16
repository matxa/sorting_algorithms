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
    int high = array[size];
    int Lomuto_partition;
    int s_2 = high - low + 1;
    int array_2[s_2];
    int top = -1;

    array_2[++top] = low;
    array_2[++top] = high;

    while (top >= 0) {
        high = array_2[top--];
        low = array_2[top--];

        Lomuto_partition = partition(array, low, high);

        if (Lomuto_partition - 1 > low) {
            array_2[++top] = low;
            array_2[++top] = Lomuto_partition - 1;
        }
        if (Lomuto_partition + 1 < high) {
            array_2[++top] = Lomuto_partition + 1;
            array_2[++top] = high;
        }
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
    int a = (low - 1);
    int b;
    int temp;

    for (b = low; b <= high - 1; b++)
    {
        if (array[b] <= pivot)
        {
            a++;
            temp = array[a];
            array[a] = array[b];
            array[b] = temp;
        }
    }
    temp = array[a + 1];
    array[a + 1] = array[b];
    array[b] = temp;
    return (a + 1);
}
