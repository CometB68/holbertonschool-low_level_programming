#include <stdio.h>

/**
 * main - main description
 * Return: 0
*/
int main(void)
{
	int i, j, k, l, aux;

	for (i = 48; i < 58; i++)
	{

		for (j = 48 ; j < 58 ; j++)
		{

			for (k = i; k < 58; k++)
			{
				(k == i) ? (aux = j + 1) : (aux = 48);
				for (l = aux; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					/* delete the last commas */
					if (i != '9' || j != '8')
					{	putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
