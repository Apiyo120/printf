#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: format string
 * @... : variable arguments
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int index = 0, count = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_start(arguments, format);

	while (format && format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == 'c' || format[index] == 's' || format[index] == 'd'
				|| format[index] == 'i' || format[index] == 'u' || format[index] == 'x' || format[index] == 'o' || format[index] == 'X')
				count += printFormatSpecifier(arguments, format[index]);
			else if (format[index] == '%')
				count += _putchar('%');
			else if (format[index] == 'b')
				count += decimal_to_binary(arguments);
			else
			{
				_putchar('%');
				_putchar(format[index]);
				count += 2;
			}
		}
		else
			count += _putchar(format[index]);
		index++;
	}
	va_end(arguments);
	return (count);
}
