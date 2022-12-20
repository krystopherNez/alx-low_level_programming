#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints the reverse of a string
  * @s: The string to print
  *
  * Return: 0
  */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
