#include <stdio.h>
#include <unistd.h>
/**
 * main - print out as string in stdout
 * Return: 0 if successful
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
