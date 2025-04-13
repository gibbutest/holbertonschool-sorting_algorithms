#include "sort.h"

/**
 * selection_sort - Sort an array in ascending order
 * @array: The array to sort
 * @size: The max limit of the output
 */
void selection_sort(int *array, size_t size)
{
	size_t a;
	size_t b;
	size_t smallest = 0;
	int tmp;

	for (a = 0; a < size - 1; a++)
	{
		smallest = a;
	
		for (b = a + 1; b < size; b++)
			if (array[b] < array[smallest])
				smallest = b;

		if (smallest != a)
		{
			tmp = array[a];
			array[a] = array[smallest];
			array[smallest] = tmp;
			print_array(array, size);
		}
	}
}
