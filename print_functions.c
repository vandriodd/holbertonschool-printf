#include "main.h"

/**
 * print_char - prints a char
 * @args: argument received
 * Return: characters printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
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
		write(1, &str[len], 1);
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

	write(1, "%", 1);
	return (1);
}
