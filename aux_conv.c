#include "main.h"

/**
 * aux_conv - parses char & finds respective function
 * @c: format
 * @args: list of args to pass to the functions
 * Return: status / amount of chars
 */

int aux_conv(char c, va_list args)
{
	unsigned int i = 0;

	format_t forms[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_number},
		{"d", print_number},
		{NULL, NULL},
	}; /* format values */

	while (i < 5)
	{
		/* iterates thru struct array for match */
		if (*forms[i].cc == c)
		{
			return (forms[i].f(args));
		}
		i++;
	}

	/* if not match writes percent & next value */
	if (c)
	{
		_write('%');
		_write(c);
		return (2); /* 2 chars cuz wrote twice */
	}
	return (0);
}
