#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'If statement'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
		printf("is positive");
	else if (n < 0)
		printf("is negative");
	else printf("is zero");
	return (0);
}
