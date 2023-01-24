#include "main.h"


/**
 * find_specifier -a function that takes a const char after % returns a fn ptr
 *
 * @c: char '%' to be processed
 * Return: pointer to a function that takes a va_list
 * and returns an int;
 */
int (*find_specifier(const char c)) (va_list args)
{
	int (*f)(va_list);

	switch (c)
	{
	case 'c':
		f = &print_char;
		return (f);
	case 's':
		f = &print_str;
		return (f);
	case '%':
		f = &print_cent;
		return (f);
	case 'i':
		f = &print_int;
		return (f);
	case 'd':
		f = &print_int;
		return (f);
	default:
		return (NULL);
	}


}
