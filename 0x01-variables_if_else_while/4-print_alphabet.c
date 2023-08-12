#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: 'letters'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	whilc (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
