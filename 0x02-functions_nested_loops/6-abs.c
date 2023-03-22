#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: the specific number variable
 * Return: absolute value of r
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	return (r);
}
