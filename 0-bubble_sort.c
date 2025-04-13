#include "sort.h"

/**
 * bubble_sort - Sort array in ascending order
 * @array: The array to sort
 * @size: The max limit of the output
 */
void bubble_sort(int *array, size_t size)
{
	size_t a;
	size_t b;
	int tmp;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				tmp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
