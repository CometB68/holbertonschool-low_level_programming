#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main description
 * Return: 0
*/
int main(void)
{
	srand(time(NULL));
	int n = rand() - RAND_MAX / 2;

	n > 0 ? printf("%i is positive", n)
		: n == 0 ? printf("%i is zero", n)
		: printf("%i is negative", n);
	return (0);
}
