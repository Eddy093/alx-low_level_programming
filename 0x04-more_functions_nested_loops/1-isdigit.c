#include "main.h"

/**
 * _isdigit - checks for digits
 * @c:the char to be checked
 * Return: 1 for digit char else 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
