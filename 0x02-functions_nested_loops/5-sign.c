#include "main.h"

/**
 * print_sign - check the sign of n
 * @n: the char to be chekced
 * Return: 1 if n>0 && print +
 * 0 if n=0 && print 0
 * - if n<0 && print -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
