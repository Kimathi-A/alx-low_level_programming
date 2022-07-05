#include <stdio.h>
/**
*main - Entry point
*Description:'computes and prints the sum of all the multiples'
*Return: Nothing.
*/

int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
