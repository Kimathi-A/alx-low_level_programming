#include "main.h"
#include <unistd.h>
/**
*main - Entry point
*Description: 'the program'
*
*Return: Nothing.
*/
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
