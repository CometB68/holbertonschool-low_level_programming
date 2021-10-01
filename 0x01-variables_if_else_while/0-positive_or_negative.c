#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main description
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	n > 0 ? printf("%i is positive\n", n)
		: n == 0 ? printf("%i is zero\n", n)
		: printf("%i is negative\n", n);
	return (0);
}
