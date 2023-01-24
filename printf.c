#include "main.h"

/**
 * _printf -a function that prints withspecifiers
 * stdout
 * @format: string to be printed
 * @...: variadic ellipsis
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	int count = 0;
	int value;
	char u;
	int (*f)(va_list);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			f = find_specifier(format[i + 1]);
			if (f)
			{
				value = f(args);
				count += value;
				i += 2;
				continue;
			}
			u = '%';
			write(1, &u, 1);
			u = format[i + 1];
			write(1, &u, 1);
			i += 2;
			count += 2;
		}
	}

	va_end(args);
	return (count);
}
