#include<stdio.h>
#include<stdlib.h>
/**
 * main - Hex print
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int ch = 'a';
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (ch < 'g')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
