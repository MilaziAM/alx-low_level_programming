#include "main.h"

/**
 * main - code
 * print_alphabet - print alphabet a to z
 * betty style
 * Return: 0 successful
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
