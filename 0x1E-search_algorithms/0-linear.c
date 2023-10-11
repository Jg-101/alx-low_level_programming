#include "search_algos.h"

/**
 * linear_search - searches for a val in an arr of
 * ints using the Linear search algorithm
 *
 * @array: inp arr
 * @size: size of the arr
 * @value: val to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
