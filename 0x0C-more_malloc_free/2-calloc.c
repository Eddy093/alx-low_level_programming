#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - Entry point
 * Description: array memory allocation using malloc
 * @nmemb: Int
 * @size: Int
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Calculate total size of memory block to allocate */
	total_size = nmemb * size;
	/* Allocate memory using malloc */
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Set the allocated memory to zero */
	memset(ptr, 0, total_size);
	return (ptr);
}
