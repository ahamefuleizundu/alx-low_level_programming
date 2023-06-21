#include <unistd.h>

/**
 * _putchar writes the character to stdout
 * print character c 
 *
 * Return: On success 1
 * On error, return -1, and set error appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
