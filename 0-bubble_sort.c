#include "sort.h"
#include <stdbool.h>

/**
* bubble_sort - entry point
* @array: the array to sort
* @size: the length of the array
* Description: Uses the bubble sort algorithm
* to swap values
* Returns: Nothing
*/
void bubble_sort(int *array, size_t size)
{
size_t idx = 0, inner_idx = 0;
int tmp = 0;
bool swapped_value = false;

if (array == NULL || size < 2)
	return;

for (idx = 0; idx < size - 1; idx++)
{

swapped_value = false;
for (inner_idx = 0; inner_idx < (size - 1 - idx); inner_idx++)
{
	if (array[inner_idx] > array[inner_idx + 1])
	{
		tmp = array[inner_idx];
		array[inner_idx] = array[inner_idx + 1];
		array[inner_idx + 1] = tmp;
		swapped_value = true;
		print_array(array, size);
	}
}

} 

}
