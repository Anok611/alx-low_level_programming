#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - duplicates copy of given parameter string
 * @str: variable fo given string
 * Return: pointer to give str or NULL if str = NULL
 */

char *_strdup(char *str)
{
	unsigned int n;
	char *s;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char));
	if (s == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		s[n] = str[n];
	return (s);
}
