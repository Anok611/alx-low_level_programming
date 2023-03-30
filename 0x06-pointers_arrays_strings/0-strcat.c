#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: string variable
 * @src: string variable
 * Return: char type
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i] != '\0')
	{
		dest[i] = src[j-1];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
