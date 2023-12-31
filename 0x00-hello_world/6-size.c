#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Program writes sizes of various types'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int num;
	long lnum;
	long long numl;
	float fnum;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lnum));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(numl));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fnum));
	return (0);
}
