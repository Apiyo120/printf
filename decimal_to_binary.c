#include "main.h"

/**
 * decimal_to_binary - function that converts decimal to binary
 * @arguments: A va_list of arguments from printf
 * Return: The number of characters printed
 */
int decimal_to_binary(va_list arguments)
{
	unsigned int decimal_number = va_arg(arguments, int);
	int binary_digits[32], digit_idx, reverse_digit_idx, character_count = 0;

	if (decimal_number == 0)
	{
		_putchar('0');
		character_count++;
	}

	digit_idx = 0;
	while (decimal_number > 0)
	{
		binary_digits[digit_idx] = decimal_number % 2;
		decimal_number /= 2;
		digit_idx++;
	}
	reverse_digit_idx = digit_idx - 1;
	while (reverse_digit_idx >= 0)
	{
		_putchar(binary_digits[reverse_digit_idx] + '0');
		reverse_digit_idx--;
		character_count++;
	}
	return (character_count);
}
