#include "main.h"

/**
 * printString - Print a string
 * @arguments: List of arguments
 *
 * Return: Number of characters printed
 */
int printString(va_list arguments)
{
	char *s = va_arg(arguments, char *);
	int index;

	if (s == NULL)
		s = "(null)";

	for (index = 0; s[index]; index++)
	{
		_putchar(s[index]);
	}
	return (index);
}
