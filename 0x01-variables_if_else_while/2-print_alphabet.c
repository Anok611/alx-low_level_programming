#include <stdio.h>
/**
 *main - entry point
 *Return: 0 {success)
 */
int main(void)
{
	int x = 'a';
	int y = 'z';

	while (x <= y)
	{
		putchar(x);
		putchar('\n');
		x++;
	}
}
