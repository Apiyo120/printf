#include "main.h"

/**
 * printHexaUpper - prints an unsigned integer
 * as a hexadecimal value using uppercase letters
 *
 * @arguments: the arguments list containing the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int printHexaUpper(va_list arguments)
{
	unsigned int num = va_arg(arguments, unsigned int);
	char hexaValues[] = "0123456789ABCDEF";
	char hexaString[20];
	int y = 0;
	int z = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		hexaString[y] = hexaValues[num % 16];
		num /= 16;
		y++;
	}
	hexaString[y] = '\0';

	for (z = y - 1; z >= 0; z--)
	{
		_putchar(hexaString[y]);
	}
	return (y);
}
