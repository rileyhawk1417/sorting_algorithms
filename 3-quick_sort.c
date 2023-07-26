#include "sort.h"

/**
* swap - swaps values
* @left: int value for the left side
* @right: int value for the right side
* Description: Simply swaps the value from
* two positions
* Returns: None
*/
void swap(int *left, int *right)
{
	size_t tmp = *left;
	*left = *right;
	*right = tmp;
}

/**
* partition_array - splits the array into two sides
* @array: The array to split
* @low: the lowest value to start with
* @high: the highest value
* @size: size of the array
* Description: This function splits the array
* into two parts from the pivot (left | right)
* Return: int
*/
int partition_array(int *array, int low, int high, size_t size)
{
int pivot_value = array[high];
int idx = low, inner_idx = low;
for (inner_idx = low; inner_idx < high; inner_idx++)
{
	if (array[inner_idx] <= pivot_value)
	{
		if (idx != inner_idx)
		{
		swap(&array[idx], &array[inner_idx]);
		print_array(array, size);
		}
		idx++;
	}
}
if (idx != high)
{
swap(&array[idx], &array[high]);
print_array(array, size);
}
return (idx);
}

/**
* recursive_quicksort - recursively sorts the array
* @array: the array to sort
* @low: The min value for the range
* @high: The highest value for the range
* @size: size of the array
* Description: performs quick sort recursively
* Returns: None
*/
void recursive_quicksort(int *array, int low, int high, size_t size)
{
int pivot_index = 0;
	if (low < high)
	{
		pivot_index = partition_array(array, low, high, size);
  /*NOTE: For the left hand side */
		recursive_quicksort(array, low, pivot_index - 1, size);

  /*NOTE: For the right hand side */
		recursive_quicksort(array, pivot_index + 1, high, size);
	}
}


/**
* quick_sort - entry point
* @array: the array to sort
* @size: the size of the array
* Description: The entry point for quick sort
* Returns: None
*/
void quick_sort(int *array, size_t size)
{
	recursive_quicksort(array, 0, size - 1, size);
}
