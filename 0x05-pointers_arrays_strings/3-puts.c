#include "main.h"
/**
 * _puts - sends the string to stdout
 * @str: this char set of string
 */
void _puts(char *str)
{
	int index;
	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
