#include "sort.h"

/**
 * selection_sort - sorts a list using selection sort
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int j, i;


	for (i = 0; i < size - 1; i++)
	{
		int min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			int temp;

			array[i] = temp;
			array[i] = array[min];
			array[min] = temp;
		} print_array(array, size);
	}
}
