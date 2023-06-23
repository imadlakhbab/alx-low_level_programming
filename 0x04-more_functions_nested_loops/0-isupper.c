#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if a char is uppercase
 * @c: char to be checked
 *
 * Return: 1 if upper otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
