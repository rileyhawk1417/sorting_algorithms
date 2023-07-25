#include "sort.h"

/**
 * selection_sort - entry point
 * @array: the array to sort
 * @size: size of the array
 * Description: This uses selection_sort
 * to sort the array elements
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
size_t idx = 0, inner_idx = 0, min_pos = 0, tmp = 0;
for (idx = 0; idx < size - 1; idx++)
{
min_pos = idx;
for (inner_idx = idx + 1; inner_idx < size; inner_idx++)
	if (array[inner_idx] < array[min_pos])
		min_pos = inner_idx;

if (min_pos != idx)
{
tmp = array[idx];
array[idx] = array[min_pos];
array[min_pos] = tmp;
}

print_array(array, size);
}

}
