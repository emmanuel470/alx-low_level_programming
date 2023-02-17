#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("\nSize of an int = %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("\nSize of a long int = %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("\nSize of a long long int = %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("\nSize of a float =%lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
