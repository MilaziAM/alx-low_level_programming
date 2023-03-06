#include "main.h"

//_memset - afunction that filld memory with a constant byte
//_memset - fills first n bytes of memory area pointed to by s with the constant byte b
//
//Return - pointer to memory area s

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
