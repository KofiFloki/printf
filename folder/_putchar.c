#include <unistd.h>
/**
 * _putchar - a function to print a character
 * c: the test character
 * Return: Success (1) & Error (-1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
