#include "main.h"
/**
 * swap_int - a functiion that swap the value of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
