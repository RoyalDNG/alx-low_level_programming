#include "main.h"
#include<unistd.h>
/**
 * _putchar - print char 
 *
 * Return: 0 (Success)
 * Error, 1 is returned
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
