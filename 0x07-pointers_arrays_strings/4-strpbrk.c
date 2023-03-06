#include "main.h"
#include <stdio.h>

//_strbrk - searches a string for any of the set of bytes.
//_strpbrk locates the first occurrence in the string s of any of the bytes in the string accept
//Return - pointer to the byte in s that matches one of the bytes in accept, or NULL if not found

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return ((s + a));
			b++;
		}
		a++;
	}
	return (NULL);
}
