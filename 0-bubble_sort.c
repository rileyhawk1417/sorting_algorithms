#include "sort.h"
#include <stdbool.h>

/**
* swap_digits - entry point
* @left: digit on the right
* @right: digit on the left
* Description: simply swaps the digits
* * Returns: Nothing
*/
void swap_digits(int *left, int *right)
{
int tmp = 0;
tmp = *left;
*left = *right;
*right = tmp;
}

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
size_t idx, inner_idx;
bool swapped_value = false;

if (array == NULL || size < 2)
	return;

for (idx = 0; idx < size - 1; idx++)
{

swapped_value = false;
for (inner_idx = 0; inner_idx < (size - idx - 1); inner_idx++)
{
	if (array[inner_idx] > array[inner_idx + 1])
	{
		/*NOTE: Had moved the swap into a function for readability */
		swap_digits(&array[inner_idx], &array[inner_idx + 1]);
		swapped_value = true;
		print_array(array, size);
	}
}

	if (swapped_value == false)
		break;

}

}
