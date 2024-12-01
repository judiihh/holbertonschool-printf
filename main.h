#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int specifier_cases(char specifier, va_list args);
int string(char *str);
int integer(int n);


#endif

