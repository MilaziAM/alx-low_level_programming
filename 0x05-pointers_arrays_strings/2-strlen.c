#include "main.h"

/**
  * _strlen - returns the length of the string
  * @s: the string to measure.
  *
  * Return: Int length.
  */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
