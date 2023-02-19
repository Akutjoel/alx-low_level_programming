#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - To determine weither Random is zero,negetive or posible
* return: 0 if Good
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
