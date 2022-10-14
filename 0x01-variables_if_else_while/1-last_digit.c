#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - assign a number
 *
 * Return: 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int x = n % 10;

	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	else if (x == 0)
	{
		printf("and is 0");
	}
	else if (x < 6)
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");

	return (0);
}
