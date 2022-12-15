#include "main.h"

/**
 * _isalpha - checks char order
 * @c: The character
 * Return: 1 for alphabet or 0 for anyhting else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
