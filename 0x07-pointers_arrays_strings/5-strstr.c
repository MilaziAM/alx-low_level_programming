#include "main.h"
#include <stdio.h>

//_strstr - function that locates a substring.
//function finds the first occurrence of the substring needle in the string haystack
//The terminating null bytes (\0) are not compared
//Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b, done;

	a = 0;
	b = 0;
	done = 0;
	while (haystack[a] != '\0')
	{
		if (needle[b] == haystack[a])
		{
			done = 1;
			b++;

		}
		else
		{
			done = 0;


			b = 0;
		}

		if (needle[b] == '\0' && done == 1)
			return ((haystack + a - b + 1));
		else if (needle[b] == '\0' && done == 0)
			return (haystack);
		a++;
	}

	return (NULL);
}
