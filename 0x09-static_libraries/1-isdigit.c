#include "main.h"
#include<ctype.h>

/**
 * _isdigit - check if c is a digit
 * @c: the arg to be checked
 *
 * Return: 1 if c is digit otherwise 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
