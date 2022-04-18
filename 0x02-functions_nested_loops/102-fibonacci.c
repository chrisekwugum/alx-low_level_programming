#include <stdio.h>
/**
 * main - Print natural numbers below 1024 multiples f 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
