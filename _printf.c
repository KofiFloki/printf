#include "main.h"
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...)
{
	char *str = NULL;
	int a = 0;
	int b = 0;

	va_list args;

	va_start(args, format);

	while (format[a] != '\0')
	{
		if (format[a] != '%')
			_putchar(format[a]);
		else
		{
			if (format[a + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				a++;
			}
			else if (format[a + 1] == 's')
			{
				a++;
				str = va_arg(args, char *);
				while (str[b] != '\0')
				{
					_putchar(str[b]);
					b++;
				}
			}
			else if (format[a + 1] == '%')
			{
				a++;
				_putchar('%');
			}
			
		}
		a++;
	}
	va_end(args);
	return (0);
}
