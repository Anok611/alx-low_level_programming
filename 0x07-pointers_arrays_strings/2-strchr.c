#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: string identifier
 * @c: character in a string
 * Return: a pointer to the first ocuurence or null if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
