#include <stdio.h>
/**
 * main - a program that prints the size of various types using Sizeof function
 * Return:Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
float f;
long long int d;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
