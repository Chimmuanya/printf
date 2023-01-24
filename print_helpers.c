#include "main.h"

/**
* help_int - function to print integers using _putchar
* @n: integer to be printed.
* prints integers to stdout
* Return: int -number of digits printed
*/

void help_int(int n)
{
	char c;

	if (n / 10)
		help_int(n / 10);

	c = (n % 10) + '0';
	write(1, &c, 1);
}


/**
* count_digits - function to count_digits
* @n: integer to be counted.
*
* Return: int -number of digits
*/

int count_digits(int n)
{
	int count = 0;

	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}
