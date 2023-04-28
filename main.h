#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int decimal_to_binary(va_list arguments);
int _putchar(char c);
int printFormatSpecifier(va_list arguments, char format);
int  printUnsignedInt(va_list arguments);
int printOctal(va_list arguments);
int printHexa(va_list arguments);
int printHexaUpper(va_list arguments);
int printString(va_list arguments);
int printChar(va_list arguments);
void _puts(char *str);
int printNumbers(va_list arguments);

#endif
