#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to print.
 */
void _puts(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
