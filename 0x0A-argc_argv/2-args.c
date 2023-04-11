#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Desc: Multiplies two nums
 * @argc: No of cmd line args
 * @argv: Array name
 * Return: 1 if needs more args, otherwise 0
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
