#include "main.h"


/**
 * print_char -a function that prints a char tostdout from a va_list
 *
 * @args: variadic pointer to be processed
 *
 * Return: int:number of chars printed;
 */
int print_char(va_list args)
{
	char c;
	int count = 0;

	if (args)
	{
		c = (char) va_arg(args, int);
		count = write(1, &c, 1);
	}


	return (count);
}


/**
 * print_str -a function that prints a str to st\
dout from a va_list
*
* @args: variadic pointer to be processed
*
* Return: int:number of chars printed;
*/
int print_str(va_list args)
{
	char *s;
	int count = 0;

	if (args)
	{
		s = va_arg(args, char *);
		while (*s != '\0')
		{
			count += write(1, s, 1);
			s++;
		}

	}


	return (count);
}




/**
  * print_cent -a function that prints a % char tost\
dout from a va_list
*
* @args: variadic pointer to be processed
*
* Return: int:number of chars printed;
*/
int print_cent(va_list args)
{
	char c;
	int count = 0;

	if (args)
	{
		c = (char) va_arg(args, int);
		count = write(1, &c, 1);
	}

	return (count);
}


/**
* print_int - function to print integers using _putchar
* @args: variadic pointer to be processed.
*
* prints integers to stdout
* Return: int -number of digits printed
*/

int print_int(va_list args)
{
	int i;
	int count = 0;
	char m = '-';

	if (args)
	{
		i = va_arg(args, int);

		if (i && i < 0)
		{
			write(1, &m, 1);
			i = i * -1;
		}
		count = count_digits(i);
		help_int(i);
	}
	return (count);
}


/**
* print_dec - function to print long long integers using _putchar
* @n: integer to be printed.
*
* prints integers to stdout
* Return: int -number of digits printed
*/

int print_dec(va_list args)
{
	long i;
	int count = 0;
	char m = '-';

	if (args)
	{
		i = va_arg(args, long);

		if (i < 0)
		{
			write(1, &m, 1);
			i = i * -1;
		}
		count = count_l(i);
		help_long(i);
	}
	return (count);
}
