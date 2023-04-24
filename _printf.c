#include "main.h"
#include <stdio.h>
#include <stdarg.h>

void print_output(char output[], int *output_len);

/**
 * _printf - The Printf Function.
 * @format: A string containing text to be printed.
 *
 * Return: The number of characters printed.
*/

int _printf(const char *format, ...)
{
<<<<<<< HEAD
	int a = 0;
	int size_buffer = 1024;
	int num_char = 0;
	int printed_char = 0;
	int format_flags = 0;
	int field_width = 0;
	int data_size = 0;
	int decimal_precision = 0;
	int output_len = 0;
	char output[size_buffer];
=======
	int a;
	int charatcter_num = 0;
	int flags = 0;
	int width = 0;
	int size = 0;
	int precision = 0;
	int printed = 0;
	int buff_ind = 0;
	va_list;
	char buffer[BUFF_SIZE];
>>>>>>> d69e049975a941091bfbc4b6ec8ac649d03a71d1

	if (format == NULL)
		return (-1);

	va_list args;

	va_start(args, format);


	while (format[a])
	{
		if (format[a] != '%')
		{
<<<<<<< HEAD
			output[output_len++] = format[a];
			if (output_len == size_buffer)
			{
				print_output(output, &output_len);
			}
			printed_char++;
=======
			buffer[buff_ind++] = format[a];
			if	(buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			charatcter_num++;
>>>>>>> d69e049975a941091bfbc4b6ec8ac649d03a71d1
		}
		else
		{
			print_output(output, &output_len);
			format_flags = get_flags(format, &a);
			field_width = get_width(format, &a, args);
			decimal_precision = get_precision(format, &a);
			++a;
			num_char = handle_print(format, &a, args, output, format_flags,
					field_width, decimal_precision, size_buffer);

			if	(num_char == -1)
				return (-1);
<<<<<<< HEAD
			printed_char = printed_char + num_char;
		}
	}
	print_output(output, &output_len);
	va_end(args);
	return (printed_char);
=======
			charatcter_num += printed;
		}
	}

	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (charatcter_num);
>>>>>>> d69e049975a941091bfbc4b6ec8ac649d03a71d1
}
/**
 * print_output - prints the content of the output array.
 * @output: array of characters to be printed.
 * @output_len: the total number of characters printed.
 *
 * Return: Void
 */

void print_output(char output[], int *output_len)
{
<<<<<<< HEAD
	if (*output_len > 0)
	{
		write(1, output, *output_len);
		*output_len = 0;
	}
=======
	if	(*buff_ind > 0)
		fwrite(int 1, &buffer[0], *buff_ind);
	*buff_ind = 0;
>>>>>>> d69e049975a941091bfbc4b6ec8ac649d03a71d1
}
