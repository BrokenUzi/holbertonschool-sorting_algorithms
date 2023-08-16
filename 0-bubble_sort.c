#include "sort.h"

/**
* bubble_sort - sort array of integers by bubble sorting
* @array: integer array
* @size: size of array
*/

void bubble_sort(int *array, size_t size)
{
	size_t x1 = 0, x2 = 0, hold = 0;

	if (!array || size < 2)
		return;

	for (x1 = 0; x1 < (size - 1); x1++)
		for (x2 = 0; x2 < (size - x1 - 1); x2++)
			if (array[x2] > array[x2 + 1])
			{
				hold = array[x2];
				array[x2] = array[x2 + 1];
				array[x2 + 1] = hold;
				print_array(array, size);
			}
}
