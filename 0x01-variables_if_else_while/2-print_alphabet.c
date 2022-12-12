#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main -  prints out letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch ='a';
	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
