#include "main.h"
/**
 * _islower = checks the lowercase
 * c is the character to be checked
 * Return: 1 for  lower or 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return(0);
}
