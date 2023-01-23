#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - A function that works like printf for c, s and %
 * @format: the format specifier
 * Return: Success (0)
 */
int _printf(const char *format, ...)
{
	char *str = NULL;
	int a = 0;
	int b = 0;
	int n_chars = 0;

	va_list args;

	va_start(args, format);

	while (format[a] != '\0')
	{
		if (format[a] != '%')
		{
			_putchar(format[a]);
			n_chars++;
		}
		else
		{
			if (format[a + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				n_chars++;
				a++;
			}
			else if (format[a + 1] == 's')
			{
				a++;
				str = va_arg(args, char *);
				while (str[b] != '\0')
				{
					_putchar(str[b]);
					n_chars++;
					b++;
				}
			}
			else if (format[a + 1] == '%')
			{
				a++;
				_putchar('%');
				n_chars++;
			}
			
		}
		a++;
	}
	va_end(args);
	return (n_chars);
}
