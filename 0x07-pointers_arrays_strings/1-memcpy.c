#include "main.h"

//_memcpy - function copies n bytes from memory area src to memory area dest
//
//Return - dest

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
