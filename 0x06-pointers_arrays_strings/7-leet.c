#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * Return: s
 */

char *leet(char *s)
{
	char lt[10][2] = {
		{'a', '0' + 4}, {'A', '0' + 4},
		{'e', '0' + 3}, {'E', '0' + 3},
		{'o', '0'}, {'O', '0'},
		{'t', '0' + 7}, {'T', '0' + 7},
		{'l', '0' + 1}, {'L', '0' + 1}};
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	{
		while (lt[b][0] != '\0')
		{
			if (s[a] == lt[b][0])
				s[a] = lt[b][1];
			b++;
		}
		b = 0;
		a++;
	}
	return (s);
}
