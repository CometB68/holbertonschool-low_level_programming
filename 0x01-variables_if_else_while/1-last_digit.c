#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main description
 * Return: 0
*/
int main(void)
{
	int n, last;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	printf("Last digit of %i is ", n);
	last > 5 ? printf("%i and is greater than 5\n", last)
		: last == 0 ? printf("%i and is 0\n", last)
		: printf("%i and is less than 6 and not 0\n", last);
	return (0);
}
