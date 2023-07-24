#include "sort.h"
#include <stdbool.h>

/**
* bubble_sort - entry point
* @array: the array to sort
* @array_length: the length of the array
* Description: Uses the bubble sort algorithm
* to swap values
* Returns: Nothing
*/
void bubble_sort(int *array, size_t array_length)
{
size_t idx = 0, inner_idx = 0;
int tmp = 0;
bool swapped_value = false;
do {
swapped_value = false;
for (inner_idx = 0; inner_idx < (array_length - 1 - idx); inner_idx++)
{
	if (array[inner_idx] > array[inner_idx + 1])
	{
		tmp = array[inner_idx];
		array[inner_idx] = array[inner_idx + 1];
		array[inner_idx + 1] = tmp;
		swapped_value = true;
	}
	print_array(array, array_length);
}
	idx++;
} while (swapped_value);

}
