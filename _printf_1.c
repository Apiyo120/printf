#include "main.h"

/**
 * _printf_1 - function that produces output according to a format.
 * @format: format string.
 * @... : variable arguments.
 * Return: the numbers of character printed.
 */
int _printf_1(const char *format, ...)
{
	va_list arguments;
	int index = 0, count = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(arguments, format);
	for (; format[index]; index++)
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
				return (-1);
			if (format[index] == 'd' || format[index] == 'i')
				count += count_digits(va_arg(arguments, int));
			else if (format[index] == 's')
			{
				char *s = va_arg(arguments, char *);

				if (!s)
					count += _puts("(null)");
				else
					count += _puts(s);
			}
			else if (format[index] == '%')
				count += _putchar('%');
			else if (format[index] == 'b')
				count += handle_binary(va_arg(arguments, unsigned int));
			else
				count += _putchar('%'), count += _putchar(format[index]);
		}
		else
			count += _putchar(format[index]);
	}
	va_end(arguments);
	return (count);
}
