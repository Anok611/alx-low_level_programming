#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: variable for string
 * Return: empty
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
