#include "sort.h"
#include <stdio.h>
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
	size_t size_of_a = sizeof(*array);
    printf("size of array in b_s %lu\nsize is %lu\n", size_of_a, size);

	if (size != size_of_a)
	{
		printf("BYE");
		exit(1);
	}

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
