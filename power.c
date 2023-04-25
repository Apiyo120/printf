#include "main.h"
/**
 * power - calculate base raised to the power of exponent.
 * @base: the base number.
 * @exponent: the exponent.
 * Return: the result of base raised to the power of exponent.
 */
int power(int base, int exponent)
{
	int result = 1;

	while (exponent--)
		result *= base;
	return (result);
}
