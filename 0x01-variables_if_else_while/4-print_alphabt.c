#include<stdio.h>
#include<stdlib.h>
/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	while (ch <= 'z')
	{
		if(ch != 'e' && ch != 'q')
		{
			putchar(ch);
		} else
		ch++;
	}
	return 0;
}
