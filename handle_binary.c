#include "main.h"

/**
 * handle_binary - converts an unsigned int to binary
 * @n: unsigned int to be converted
 * Return: number of characters printed
 */
int handle_binary(unsigned int n)
{
	if (n == 0)
		return (_putchar('0'));
	if (n / 2)
		handle_binary(n / 2);
	return (_putchar(n % 2 + '0'));
}
