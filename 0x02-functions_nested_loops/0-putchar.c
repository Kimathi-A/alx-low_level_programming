#include <main.h>
/**
*main - Entry point
*Description:'the program's description'
*
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
