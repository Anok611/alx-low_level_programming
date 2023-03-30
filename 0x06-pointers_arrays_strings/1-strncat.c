#include "main.h"
/**
 * _strncar - a function that concatenates two strings using at most n bytes
 * @dest: first string variable
 * @src: second string variable
 * @n: size of bytes
 * Return: char type
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t len = 0;
	int i = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	dest[len++] = src[i];
	return (dest);
}
