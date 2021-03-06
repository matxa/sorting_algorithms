#include "sort.h"

/**
 * bubble_sort - sorting algorithm
 * @array: integer array
 * @size: size of the array
 * Return: VOID
 */

void bubble_sort(int *array, size_t size)
{
	size_t a;
	size_t b;
	int temp;

	if (size > 1)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size - a - 1; b++)
			{
				if (array[b] > array[b + 1])
				{
					temp = array[b];
					array[b] = array[b + 1];
					array[b + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
