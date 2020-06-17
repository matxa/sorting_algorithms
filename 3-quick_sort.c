#include "sort.h"

/**
 * quick_sort - quick sort
 * @array: array to be sorted
 * @size: size of the array
 * Return: VOID
 */

void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	quick_sort_helper(array, low, high, size);
}

/**
 * quick_sort_helper - helper function for quick_sort
 * @array: array of ints
 * @low: min
 * @high: max
 * @size: size of the array
 * Return: VOID
 */

void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int Lomuto_partition;

	if (low < high)
	{
		Lomuto_partition = partition(array, low, high, size);

		quick_sort_helper(array, low, Lomuto_partition - 1, size);
		quick_sort_helper(array, Lomuto_partition + 1, high, size);
	}
}

/**
 * partition - partitioning function
 * @array: array
 * @low: min
 * @high: max
 * @size: size of the array
 * Return: a + 1
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int a = low - 1;
	int b;

	for (b = low; b < high - 1; b++)
	{
        a++;
		if (array[b] < pivot)
		{
			swap(&array[a], &array[b]);
		}
	}
	swap(&array[a + 1], &array[high]);
	print_array(array, size);
	return (a + 1);
}

/**
 * swap - swap 2 numbers
 * @a: number to be replaced
 * @b: number to replace with
 * Return: VOID
 */

void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
