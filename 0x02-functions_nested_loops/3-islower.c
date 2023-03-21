#include "main.h"
/**
 * _islower - checks for lower case character
 * @c: character variable
 * Return: 1 (lowercase), 0(Uppercase)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
