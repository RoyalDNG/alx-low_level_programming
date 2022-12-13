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
	int ch = 'A';
	while (num < 10)
	{
		putchar(num);
		num++;
	}
	while (ch < 'G')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return 0;
}
