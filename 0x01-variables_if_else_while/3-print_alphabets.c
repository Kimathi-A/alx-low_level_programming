#include <stdio.h>
/**
*main - Entry point
*
*Description: 'the program's description'
*
*Return: 0 on success
*/
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
