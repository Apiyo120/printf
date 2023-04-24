#include  "main.h"
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

	if	(!format)
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
	if	(format == 'd' || format == 'j')
		return (handle_integer(va_arg(arguments, int)));
	else
		return (0);
}

/**
 * handle_integer - function that handles integer arguments.
 * @number: the integer of argument.
 * Return: the number of characters printed.
*/
int handle_integer(int number)
{
	int count = 0, is_negative = 0, digits = 0;

	if	(number < 0)
	{
		is_negative = 1;
		number = -number;
	}
	digits = count_digits(number);

	if	(is_negative)
		count += _putchar('-');

	while	(digits--)
		count += _putchar((number / power(10, digits)) % 10 + '0');
	return (count);
}

/**
 * handle_string - function that handles string arguments.
 * @str: the string argument.
 * Return: the number of characters printed.
*/

int handle_string(char *str)
{
	int count = 0;

	if	(!str)
		str = "(null)";
	while	(*str)
		count += _putchar(*str++);
	return (count);
}

/**
 * power - calculate base raised to te powr of exponent.
 * @base: the base number.
 * @exponent: the exponent.
 * Return: the result of base raised to the power of expinent.
*/

int power(int base, int exponent)
{
	int result = 1;

	while	(exponent--)
		result *= base;
	return (result);
}
