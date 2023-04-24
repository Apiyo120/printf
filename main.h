#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _printf_1(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int power(int base, int exponent);
int handle_argument(char format, va_list arguments);
int handle_integer(int number);
int handle_string(char *str);
int power(int base, int exponent);
int count_digits(int number);
#endif
