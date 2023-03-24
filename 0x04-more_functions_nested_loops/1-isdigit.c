#include "main.h"
/**
 * -isdigit -  check if a character is a a digit
 *  @x: The number to be checked
 *  Return: 1 if character or 0 if not
 */
int _isdigit(int x)
{
	if (x >=48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
