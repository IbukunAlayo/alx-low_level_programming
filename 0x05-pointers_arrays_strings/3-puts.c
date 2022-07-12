#include "main.h"
/**
 * main - a function that prints a string
 * @s - followed by a new line to stdout
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
			_putchar(*str++);
		_putchar('\n');
	}
}
