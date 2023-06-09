#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory area designated
 * @src: memrory area to be copied from
 * @n: size of bytes to be copied
 * Return: dest memory area designated
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
