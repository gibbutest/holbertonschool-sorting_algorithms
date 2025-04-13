#include "sort.h"

/**
 * swap - Swap the value of the pointers
 * @a: The first pointer
 * @b: The second pointer
 */
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

/**
 * partition - Check the values and swap if required
 * @array: The array to sort
 * @low: The lowest point
 * @high: The highest point
 * @size: The size of the array
 */
int partition(int array[], int low, int high, size_t size)
{
  int pivot = array[high];
  int i = (low - 1);
	int j;

  for (j = low; j < high; j++)
	{
    if (array[j] <= pivot)
		{
      i++;
      
      swap(&array[i], &array[j]);
			print_array(array, size);
    }
  }

  swap(&array[i + 1], &array[high]);
	print_array(array, size);
  
  return (i + 1);
}

/**
 * quickSort - Recursively sort the array
 * @array: The array to sort
 * @low: The lowest point
 * @high: The highest point
 * @size: The size of the array
 */
void quickSort(int array[], int low, int high, size_t size)
{
  if (low < high)
	{
    int pi = partition(array, low, high, size);
    quickSort(array, low, pi - 1, size);
    quickSort(array, pi + 1, high, size);
  }
}

/**
 * quick_sort - Sort the array in ascending order
 * @array: The array to sort
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size == 0)
		return;

	quickSort(array, 0, size - 1, size);
}
