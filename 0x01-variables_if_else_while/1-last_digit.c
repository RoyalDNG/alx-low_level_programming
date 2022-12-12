#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - checks the last no fits parameters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	
	printf("Last digit of %d is", n);
	printf(" %d ", num);
	if (num > 5)
	{
		printf("and is greater than 5\n");
	}
	if (num == 0)
	{
		printf("and is 0\n");
	}
	if (num < 6 && num != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
