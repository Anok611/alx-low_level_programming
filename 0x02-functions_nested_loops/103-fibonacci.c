#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, Sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		{
			Sum += k;
			j = k - j;
			++i;
		}
	}
	printf("%ld\n", Sum);
	return (0);
}
