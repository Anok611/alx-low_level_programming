#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array- creates array and initializes it with a specific char
 * @size: size variable
 * @c: char variable
 * Description: create array of size size and assign char c
 * Return: pointer to array,NULL if fail
 **/
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(size * sizeof(char));
	if (s == NULL || size == 0)
		return (NULL);

	for (i = 0; (unsigned int)i < size ; i++)
		s[i] = c;
	return (s);
}

