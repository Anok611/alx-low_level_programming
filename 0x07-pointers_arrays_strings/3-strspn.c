#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string identifier
 * @accept: size of bytes
 * Return: pointer to s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (*s);
		}
		s++;
	}
	return (0);
}
