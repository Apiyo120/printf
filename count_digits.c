#include "main.h"

/**
 * count_digits - function that counts the number of digits in an integer.
 * @number: the integer.
 * Return: the number of digits.
*/

int count_digits(int number)
{
	int digits = 1;

	while (number / 10)
	{
		digits++;
		number /= 10;
	}

	return (digits);
}
