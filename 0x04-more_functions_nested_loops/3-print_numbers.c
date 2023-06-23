#include "main.h"

/**
 * print_numbers - 0 to 9
 * followed by new line
 *
 * Return: void
 */
int _putchar(char c);

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
