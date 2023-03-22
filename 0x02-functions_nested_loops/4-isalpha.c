#include "main.h"

/**
 * _isalpha - a function that checks alphabetic letters
 * @c: is the checked char
 * Return: 1 if char is a letter lowercase or uppercase, otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
	{
		return  (1);
	}
	else
	{
		return (0);
	}
}
