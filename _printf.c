#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string composed of 0 or more directives
 * Return: number of characters printed (null-byte excluded)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int length, i;
	int (*f)(va_list *);
	/*int printed*/

	if (format == NULL)
		return (-1);
	length = 0;
	va_start(ap, format);
	for (i = 0; format[i]; i++)
	{
		write(STDOUT_FILENO, &format[i], 1);
		length++;
	}
	va_end(ap);
	return (length);
}
