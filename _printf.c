#include "main.h"

/**
 * _printf - prints to stdout based on formatting instructions
 * @format: string that contains the output format
 * Return: status / amount of chars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, len = 0;

	va_start(args, format);
	/* case of failure */
	if (!format)
		return (-1);

	for (; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			/* adds return value from func */
			len += aux_conv(format[i], args);
		}
		else if (format[i] == '%' && !format[i + 1])
		{
			/* don't print % if last char & return error */
			return (-1);
		}
		else
		{
			/* if all else fails simply write */
			_write(format[i]);
			len++;
		}
	}
	va_end(args);
	return (len); /* amount of chars printed */
}
