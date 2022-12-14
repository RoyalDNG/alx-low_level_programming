#include<unistd.h>
/**
 * putchar sends characters to stdout
 * c -  is the character bing printed
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
