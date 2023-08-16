#include "sort.h"

/**
* selection_sort - sort integer array (ascending order)
* @array: unsorted array
* @size: size of array
*/

void selection_sort(int *array, size_t size)
{
	size_t x = 0, y = 0, z = 0;
	int store = 0;

	if (!array || !size)
		return;

	for (x = 0; x < (size - 1); x++)
	{
		y = x;
		for (z = x + 1; z < size; z++)
			if (array[z] < array[y])
				y = z;
		if (y != x)
		{
			store = array[x];
			array[x] = array[y];
			array[y] = store;
			print_array(array, size);
		}
	}
}
