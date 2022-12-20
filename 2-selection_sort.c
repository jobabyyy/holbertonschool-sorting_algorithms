#include "sort.h"

/**
 * swap - swaps two variables
 * @n1: first to swap
 * @n2: second to swap
 */
void swap(int *n1, int *n2)
{
	int tmp = *n1;

	*n1 = *n2;
	*n2 = tmp;
}

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, index = 0;
	int tmp = 0;

	if (size < 2)
		return;
	while (i < size - 1)
	{
		index = i;
		tmp = array[i];
		j = i + 1;
		while (j < size)
		{
			if (array[j] < tmp)
				tmp = array[j], index = j;
			j++;
		}
		if (index != i)
		{
			array[index] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
