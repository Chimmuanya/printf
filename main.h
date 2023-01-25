#ifndef _main_h_
#define _main_h_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


int _printf(const char *format, ...);
int (*find_specifier (const char c))(va_list);
int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_int(va_list);
int print_dec(va_list);
void help_long(long);
int count_l(long);
void help_int(int);
int count_digits(int);

#endif
