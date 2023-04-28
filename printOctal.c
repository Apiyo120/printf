#include "main.h"

/**
 * printOctal - prints an unsigned integer as an octal value
 *
 * @arguments: the arguments list containing the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int printOctal(va_list arguments)
{
	unsigned int num = va_arg(arguments, unsigned int);
	char octalString[20];
	int y = 0, z = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		octalString[y] = num % 8 + '0';
		num /= 8;
		y++;
	}
	octalString[y] = '\0';

	for (z = y - 1; z >= 0; z--)
	{
		_putchar(octalString[z]);
	}
	return (y);
}
