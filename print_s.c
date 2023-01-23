#include "main.h"

/**
 * print_s - a function that prints a string
 * @list: String to takr
 * Return: taken string
 */

char *print_s(va_list list)
{
	char *p;
	char *s;
	int lenght;

	s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";

	lenght = _strlen(s);

	p = malloc(sizeof(char) * lenght + 1);
	if (p == NULL)
		return (NULL);

	return (_strcpy(p, s));
}
