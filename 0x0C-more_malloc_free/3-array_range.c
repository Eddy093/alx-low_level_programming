#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * Description: Creates an array of integers
 * @min: Int
 * @max: Int
 * Return: array
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
	{
		return (NULL);
	}
	/* Calculate the size of the array */
	size = max - min + 1;
	/* Allocate memory for the array */
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
		/* Fill the array with values */
		/* the values that are from min to max */
	}
	return (arr);
}
