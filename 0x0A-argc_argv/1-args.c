#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the num of args passed
 * @argc: No of cmd line args
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
