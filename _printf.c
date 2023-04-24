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

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
	{
		return (-1);
	}
	va_start(arguments, format);
	for (; format[index]; index++)
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
				return (-1);
			if (format[index] == 'c')
				count += _putchar(va_arg(arguments, int));
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
			else
				count += _putchar('%'), count += _putchar(format[index]);
		}
		else
			count += _putchar(format[index]);
	}
	va_end(arguments);
	return (count);
}
