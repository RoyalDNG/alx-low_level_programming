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

	while(i < 8)
	{
		putchar(a[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
