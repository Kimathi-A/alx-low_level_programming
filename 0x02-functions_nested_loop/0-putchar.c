#include <main.h>
/**
*main -Entry point
*
*Description: 'the program writes the character c'
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
