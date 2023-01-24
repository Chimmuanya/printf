# printf
A function that works like c's printf

## Hello, this is readme file for our printf project
# Prototypes include:

-int _printf(const char *format, ...);

Returns: the number of characters printed (excluding the null byte used to end
output to strings)

specifiers: functions to print each c -specifier

int (*find_specifier (va_list, const char c))(va_list);

Returns: pointers to the specifier functions.
