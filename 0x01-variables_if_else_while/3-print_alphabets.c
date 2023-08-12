#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Alphabet'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while(c <= 'z')
	{
		putchar(c);
		putchar(C);
		c++;
		C++;
	}
	
	putchar('\n');
	return (0);
}
