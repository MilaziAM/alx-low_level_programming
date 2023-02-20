#include <stdio.h>
/**
 * main
 *
 * return: 0 (successful)
 *
 */
int main(void)
{
	char c;
	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
