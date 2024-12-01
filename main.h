#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int specifier_cases(char spec, va_list args);
int string(char *str);
int integer(int n);
int _putchar(char c);

#endif
