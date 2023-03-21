#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase followed by a new line
 * Return - 0 (Success)
 */
void print_alphabet(void)
{
	int x = 'a';
	int y = 'z';

	while (x <= y)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
