#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character_should be printed
 * Return: no return
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
}
