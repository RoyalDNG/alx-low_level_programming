#include<unistd.h>
/**
 * _putchar - writes a character into stdout
 *
 * @c: the character
 * Return: 1 when succesful and -1 when error
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
