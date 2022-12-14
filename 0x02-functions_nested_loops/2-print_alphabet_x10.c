#include "main.h"
/**
 * print_alphabet_x10 - does as it says
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int t = 0;

	while (t < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		t++;
		_putchar('\n');
	}
}
