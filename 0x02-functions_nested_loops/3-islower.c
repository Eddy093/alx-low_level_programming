#include "main.h"

/**
 * _islower - checking a lowercase character
 *@c: is the checked char
 * Return: 1 is char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
