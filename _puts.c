#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to be printed
 * Return: the number of characters printed (excluding the null byte)
 */
int _puts(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
