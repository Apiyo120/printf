#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - The Printf Function.
 * @format: A string containing text to be printed.
 *
 * Return: The number of characters printed.
*/

int _printf(const char *format, ...)
{
	int a;
	int charatcter_num = 0;
	int flags = 0;
	int width = 0;
	int size = 0;
	int precision = 0;
	int buff_ind = 0;
	char buffer[size__size];

	if	(format == NULL)
		return (-1);

	va_start(list, format);

	for	(a = 0; format && format[a] != '\0'; a++)
	{
		if	(format[a] != '%')
		{
			buffer[buff_ind++] = format[a];
			if	(buff_ind == buff_size)
				print_buffer(buff, &buff_ind);
			character_num++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &a);
			width = get_width(format, &a, list);
			precision = get_precision(format, &a);
			++a;
			printed = handle_print (format, &a, list, buffer, flags, width, precision, size);

			if	(printed == -1)
				return (-1);
			character_num += printed;
		}
	}

	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (character_num);
}

/**
 * print_buffer - Prints the content of the buffer.
 * @buffer: Array of characters to be printed.
 * @buff_ind: Index at which to add the next character, represent the length.
 *
 * Return: Void
*/

void print_buffer(char buffer[], int *buff_ind)
{
	if	(*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}
