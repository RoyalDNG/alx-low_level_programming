#include "main.h"
/**
 * print_rev - prints string in reverse
 *
 * @s: is the characters of the string
 */
void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
