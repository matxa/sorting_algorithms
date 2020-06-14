#include "sort.h"

/**
 * selection_sort - selection sort
 * @array: array to be sorted
 * @size: size of the array
 * Return: VOID
 */

void selection_sort(int *array, size_t size)
{
	size_t a;
	size_t b;
	size_t min;
	size_t temp;

	if (size > 1)
	{
		for (a = 0; a < size - 1; a++)
		{
			min = a;
			for (b = min + 1; b < size; b++)
			{
				if (array[b] < array[min])
					min = b;
			}
			temp = array[a];
			array[a] = array[min];
			array[min] = temp;
		}
	}
}
