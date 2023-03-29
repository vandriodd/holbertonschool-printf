#include "main.h"

int
_printf(const char *format, ...)
{
	unsigned int b = 0;

	while (*format != '\0')
	{
		b++;
		format++;
	}
	return (b);
}

