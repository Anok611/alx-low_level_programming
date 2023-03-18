#include <stdio.h>
/**
 * main - a program that prints the size of various types on the computer it is compiled on using Sizeof function
 * Return: 0 (Success)
 */
int main(void)
{
char c;
int i;
long int li;
float f;
long long int lli;

printf("Size of a char:%s"), Sizeof(c);
printf("Size of an int:%s"), Sizeof(i);
printf("Size of a long int:%s"), Sizeof(li);
printf("Size of a long long int:%s"), Sizeof(lli);
printf("Size of a float:%s"), Sizeof(f);
return (0);
}

