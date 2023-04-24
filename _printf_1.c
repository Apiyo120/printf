#include  "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: format string.
 * @... : variable arguments.
 * Return: the numbers of character printed.
*/

int _printf(const char *format, ...)
{
	if	(!format)
		return (-1);
	va_list arguments;

	int index = 0, count = 0;

	va_start(arguments, format);

	while	 (format[index])
	{
		if	(format[index] == '%')
			index++;

		if	(format[index] == 'd' || format[index] == 'j')
		{
			int number = va_arg(arguments, int);
			int is_negative = 0;

			if	(number < 0)
			{
				is_negative = 1;
			number = number;
		}

		int digits = 1, temp = number;

		while (temp / 10)
		{
			digits++;
			temp /= 10;
		}

		if	(is_negative)
			count += _putchar('-');

		for	(int i = digits - 1; i >= 0; i--)
			count += _putchar((number / power(10, j)) % 10 + '0');
		}
		else if	(format[index] == 's')
		{
			char *str = va_arg(arguments, char *);

			if	(!str)
			{
				str = "(null)';
			}

			while	(*str)
			{
				count += _putchar(*str);
				str++;
			}
		}
		else
		{
			count += _putchar('%');
			count += _putchar(format[index]);
		}
		index++;
	}
	va_end(arguments);
	return (count);
}

/**
*power - calculate base raised to the power of exponent.
*@base: the base number.
*@exponent: the exponent.
*Return:the result of base raised to the power of exponent.
*/

int power(int base, int exponent)
{
	int result = 1;
	int z = 0;

	while	(z < exponent)
	{
		result *= base;
		z++;
	}
	return (result);
}

