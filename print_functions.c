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
	int number = va_arg(args, int), len = 0, negFlag = 0; /* 0 false, 1 true */
	unsigned int buff_num;
	char buff[11];
	char *pBuff = &buff[10];

	*pBuff = '\0'; /* marks end of the array */

	if (number < 0)
	{
		buff_num = -number;
		negFlag = 1;
	}
	else
		buff_num = number;

	if (buff_num == 0)
	{
		_write('0');
		return (1); /* only returns one character */
	}

	while (buff_num != 0)
	{
		*--pBuff = buff_num % 10 + '0'; /* stores number backwards in the array */
		buff_num /= 10;
	}

	if (negFlag)
	{
		_write('-'); /* adds negative sign */
		len++;
	}

	while (*pBuff) /* until it reaches null */
	{
		_write(*pBuff);
		pBuff++;
		len++;
	}
	return (len);
}
