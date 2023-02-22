#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check lower case character
 * @c: character to test.
 *
 * Return: 1 else 0
 */

int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
