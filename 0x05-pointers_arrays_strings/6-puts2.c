#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: 0
  */
void puts2(char *str)
{
	int m;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (m = 0; m < j; m += 2)
	{
		_putchar(str[m]);
	}

	_putchar('\n');
}
