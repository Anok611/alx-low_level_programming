#include "main.h"
#include <stddef.h>
/**
 * _strlen - a function that returns the length of a string
 * @str: the string variable
 * Return: length of a string
 */
int _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
