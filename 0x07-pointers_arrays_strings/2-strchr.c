#include "main.h"
#include <stdio.h>

//_strchr - function that locates a character in a string.
//
//Returns - a pointer to the first occurrence of the character c in the string s, or null if the character is not found

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}
