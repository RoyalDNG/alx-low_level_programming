#include "main.h"
#include<stdio.h>
/**
 * main - prints some text
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	while (i < 8)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
