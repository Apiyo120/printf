#include "main.h"

/**
 * printUnsignedInt - prints an unsigned integer
 *
 * @arguments: the arguments list containing the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int printUnsignedInt(va_list arguments)
{
	unsigned int num = va_arg(arguments, unsigned int);
	unsigned int divisor = 1;
	int numCharsPrinted = 0;

	while (num / divisor >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		numCharsPrinted += _putchar('0' + (num / divisor));
		num %= divisor;
		divisor /= 10;
	}
	return (numCharsPrinted);
}
