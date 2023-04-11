#include "main.h"
#include <stdio.h>

/**
 * main - print the num of arg passed to the oprogram
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
