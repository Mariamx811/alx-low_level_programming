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

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
