#include "main.h"
/**
 * _strlen - program returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *a)
{
	int longa = 0;

	while (*a != '\0')
	{
		longa++;
		a++;
	}
	return (longa);
}
