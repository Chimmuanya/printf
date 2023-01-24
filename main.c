#include "main.h"

#include <stdio.h>

int main(void)
{
	int cnt;
	char *s = "compassionate";
	_printf("goo%s evening");
	_printf("goo\tdx evening");
	_printf("ghana %c",'C');
	cnt = _printf("eltsin, his %s wife 100%%", s, '%');
	printf("I printed %d chars above\n", cnt);
	return 0;
}
