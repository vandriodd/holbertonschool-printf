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

/**
 * print_number - prints a number
 * @args: argument received
 * Return: characters printed
 */

int print_number(va_list args)
{
	long int number = va_arg(args, int), n = number, value = 1;
	int len = 0;
	char i;

	if (number < 0)
	{
		n *= -1;
		number = -number;
		_write('-');
		len++;
	}

	if (number == 0)
	{
		_write('0');
		len++;
		return (len);
	}

	while (n > 0)
	{
		n /= 10;
		value *= 10;
	}

	value /= 10; /* digit overshoots by one, fixes it */

	while (value != 0)
	{
		i = number / value + '0'; /* obtains the 1st digit */
		_write(i);
		len++;
		number %= value;
		value /= 10; /* reduce digit */
	}
	return (len);
}
