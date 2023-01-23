#include "main.h"

/**
 * _strcpy - copies one string to another
 * @dest: string to be copied to
 * @src: string to copy from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = src[a];
	return (dest);
}
