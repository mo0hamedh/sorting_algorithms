#include "sort.h"
/**
 * - bubble_sort - fun that sorts the array of ints
- using bubbly sort algorithm
- @array - the array of the numbers
- @size - the size of array
*/
void bubble_sort(int *array, size_t size)
{
	int swap;
	size_t i ,k;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (k = 0; k < size -1; k++)
		{
			if (array[k] > array[k+1])
			{
				swap = array[k];
				array[k] = array[k+1];
				array[k+1] = swap;
				print_array(array, size);
			}
		}
	}
}   
