#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main description
 * Return: 0
*/
int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}