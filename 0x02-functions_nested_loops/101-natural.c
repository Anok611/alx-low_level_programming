#include <stdio.h>
/**
 * main - entry point
 * Return: result
 */

int main(void)
{
	int x, sum = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
		x++;
	}
	printf("Sum = %d\n", sum);
	return (0);
}
