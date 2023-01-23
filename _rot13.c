#include "main.h"

/**
 * rot13 - encodes normal string to rot13
 * @list: string to encode
 * Return: encoded string
 */

char *rot13(va_list list)
{
	int a = 0;
	char *s;
	char *new_s;

	s = va_arg(list, char *);

	new_s = malloc(sizeof(char) * (_strlen(s) + 1));
	if (new_s == NULL)
		return (NULL);
	while (s[a] != '\0')
	{
		if ((s[a] >= 'a' && s[a] <= 'm') || (s[a] >= 'A' && s[a] <= 'M'))
		{
			new_s[a] = s[a] - 13;
		}
		else if ((s[a] >= 'n' && s[a] <= 'z') || (s[a] >= 'N' && s[a] <= 'Z'))
		{
			new_s[a] = s[a] - 13;
		}
		else
			(new_s[a] = s[a]);
			i++;
	}
	nstr[i] = '\0';

	return (new_s);
}

