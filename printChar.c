#include "main.h"

/**
 * printChar - Print a single character
 * @arguments: List of arguments
 *
 * Return: number of characters printed
 */
int printChar(va_list arguments)
{
	char c = va_arg(arguments, int);
		_putchar(c);
	return (1);
}
