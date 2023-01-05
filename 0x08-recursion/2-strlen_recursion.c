#include "main.h"

/**
 * _strlen_recursion - return the length of astring
 * @s:
 * The string to be measured
 *
 * Return: The lenght of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_resources(s + 1)
	}
	return (longit);
}
