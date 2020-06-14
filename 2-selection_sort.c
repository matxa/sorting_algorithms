#include "sort.h"

/**
 * selection_sort - selection sort
 * @array: array to be sorted
 * @size: size of the array
 * Return: VOID
 */

void selection_sort(int *array, size_t size)
{
	int a;
	int b;
	int min;
	int temp;

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
			if (min != a)
			{
				temp = array[a];
				array[a] = min;
				min = temp;
			}
		}
	}
}
