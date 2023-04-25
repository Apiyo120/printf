#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int decimal_to_binary(va_list arguments);
int _putchar(char c);
int printFormatSpecifier(va_list arguments, char specifier);
int printString(va_list arguments);
int printChar(va_list arguments);

#endif
