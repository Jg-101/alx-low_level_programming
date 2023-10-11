#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of ints using binary search.
  * @array: A pointer to the first elem of the array to search.
  * @size: The num of elems in the arr.
  * @value: The val to search for.
  *
  * Return: If the val is not present or the arr is NULL, -1.
  *         Otherwise, the index where the val is located.
  *
  * Description: Prints the [sub]arr being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
