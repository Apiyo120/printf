#include "main.h"

/**
 * printNumbers -function tha prints a given number
 * @arguments: variable argument list
 *
 * Return: the number of characters printed
 */

int printNumbers(va_list arguments)
{
	int number = va_arg(arguments, int);
	int length = 0, divisor = 1;

	if (number == INT_MIN)
	{
		_puts("-2147483648");
		return (11);
	}
	if (number < 0)
	{
		_putchar('-');
		number = -number;
		length++;
	}
	while (number / divisor > 9)
	{
		divisor = divisor * 10;
	}
	while (divisor > 0)
	{
		int digit = number / divisor;

		_putchar('0' + digit);
		number %= divisor;
		divisor /= 10;
		length++;
	}
	return (length);
}
