#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'program'
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lnum = n % 10;
	if(lnum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lnum);
	else if(lnum == 0)
		printf("Last digit of %d is %d and is 0\n", n,lnum);
	else if(lnum < 6)
		printf("Last digit of %d is %d and is less than 6\n", n,lnum);
	return (0);
}