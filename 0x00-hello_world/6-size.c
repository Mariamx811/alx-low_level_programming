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
	long long llnum;
	float fnum;

	printf("Size of a char: %lu", (unsigned long)sizeof(c));
	printf("Size of an int: %lu", (unsigned long)sizeof(num));	
	printf("Size of a long int: %lu", (unsigned long)sizeof(lnum));	
	printf("Size of a long long int: %lu", (unsigned long)sizeof(llnum));		   printf("Size of a float: %lu", (unsigned long)sizeof(fnum));
	return (0);
}
