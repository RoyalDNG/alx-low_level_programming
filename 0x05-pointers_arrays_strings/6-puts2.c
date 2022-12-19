#include "main.h"
/**
 * puts2: prints every letter of a string in its own line
 *
 * @str: is the pointer to the string
 * return the reverse
 */
void puts2(char *str)
{ 
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
	}
	while (count > 0)
	{
		_putchar(str[count]);
		_putchar('\n');
		count--;
	}
}
