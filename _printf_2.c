#include "main.h"

/**
 * _printf_2 - function that produces output according to a format.
 * @format: format string.
 * @... : variable arguments.
 * Return: the numbers of character printed.
 */
int _printf_2(const char *format, ...)
{
	va_list arguments;
	int index = 0, count = 0;

	if (!format)
		return (-1);

	va_start(arguments, format);

	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			count += handle_argument(format[index], arguments);
		}
		else
			count += _putchar(format[index]);
		index++;
	}
	va_end(arguments);
	return (count);
}

/**
 * handle_argument - function that handles each type of argument.
 * @format: the format specifier.
 * @arguments: the list of arguments.
 * Return: the number of characters printed.
 */
int handle_argument(char format, va_list arguments)
{
	if (format == 'b')
		return (handle_binary(va_arg(arguments, unsigned int)));
	else
		return (0);
}
/**
 * handle_binary - function that handles binary arguments.
 * @number: the binary argument.
 * Return: the number of characters printed.
 */
int handle_binary(unsigned int number)
{
	int count = 0, binary[32], z;

	if (number == 0)
		return (_putchar('0'));

	for (z = 0; number > 0; z++)
	{
		binary[z] = number % 2;
		number /= 2;
	}
	for (z = z - 1; z >= 0; z--)
		count += _putchar(binary[z] + '0');

	return (count);
}
/**
 * power - calculate base raised to the power of exponent.
 * @base: the base number.
 * @exponent: the exponent.
 * Return: the result of base raised to the power of exponent.
 */

int power(int base, int exponent)
{
	int result = 1;

	while (exponent--)
		result *= base;
	return (result);
}
