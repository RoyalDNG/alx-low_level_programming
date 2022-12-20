#include "main.h"
/**
 * rev_string - reverses a string
 * @s: this is the string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	char rev[count];
	count = count - 1;

	while (count >= 0)
	{
		_putchar(s[count]);
		rev[count] = s[count];
		count--;
	}
	_putchar('\n');
	return(rev);
}
