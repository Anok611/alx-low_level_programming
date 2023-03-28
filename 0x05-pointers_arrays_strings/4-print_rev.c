#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string variable
 * Return: empty
 */
void print_rev(char *s)
{
	size_t len = 0;
	int i = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
