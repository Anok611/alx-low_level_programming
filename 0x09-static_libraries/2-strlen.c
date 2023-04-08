#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @str: the string variable
 * Return: length of a string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
