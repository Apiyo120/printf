#include "main.h"

/**
 * printFormatSpecifier - Calls the appropriate function
 * to handle a format specifier
 *
 * @arguments: The arguments list for the format specifier
 * @format: The format specifier character to handle
 *
 * Return: The number of characters printed
 */
int printFormatSpecifier(va_list arguments, char format)
{
	int numCharsPrinted = 0;

	if (format == 'c')
	{
		numCharsPrinted = numCharsPrinted + printChar(arguments);
	}
	if (format == 's')
	{
		numCharsPrinted = numCharsPrinted + printString(arguments);
	}
	if (format == 'd' || format == 'i')
	{
		numCharsPrinted = numCharsPrinted + printNumbers(arguments);
	}
	if (format == 'u')
	{
		numCharsPrinted = numCharsPrinted + printUnsignedInt(arguments);
	}
	if (format == 'o')
	{
		numCharsPrinted = numCharsPrinted + printOctal(arguments);
	}
	if (format == 'x')
	{
		numCharsPrinted = numCharsPrinted + printHexa(arguments);
	}
	if (format == 'X')
	{
		numCharsPrinted = numCharsPrinted + printHexaUpper(arguments);
	}
	return (numCharsPrinted);
}
