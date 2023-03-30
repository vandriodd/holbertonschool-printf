#include "main.h"

/**
 * print_char - prints a char
 * @args: argument received
 * Return: characters printed
 */

int print_char(va_list args)
{
	_write(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints a strings
 * @args: argument received
 * Return: characters printed
 */

int print_string(va_list args)
{
	char *str;
	int len = 0;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)"; /* printf case */

	/* iterator = characters return */
	for (; str[len]; len++)
		_write(str[len]);
	return (len);
}

/**
 * print_percent - prints a percentage
 * @args: argument received
 * Return: characters printed
 */

int print_percent(va_list args)
{
	(void) args; /* gets rid of unnecessary argument */

	_write('%');
	return (1);
}
