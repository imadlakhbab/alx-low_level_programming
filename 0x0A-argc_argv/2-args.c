#include <stdio.h>

/**
 * main - print all arguments
 * @argc: nbr of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	
	for (i = 0; i < argc; i++)
	{
            printf("%s\n", argv[i]);
	}

        return (0);
}
