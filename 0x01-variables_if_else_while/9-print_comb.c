#include<stdio.h>
#include<stdlib.h>
/**
 * main - the noms
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	while
	       	(a < 10){
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
