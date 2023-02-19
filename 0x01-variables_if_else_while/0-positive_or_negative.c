#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Determine if a random number is positive, negative or zero.
 * return: if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negetive\n", n);
	}
	return (0);
}
