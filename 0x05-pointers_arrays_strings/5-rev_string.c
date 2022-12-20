#include "main.h"

/**
  * rev_string - ftn to reverses a string
  * @s: The string to be modified
  *
  * Return: 0
  */
void rev_string(char *s)
{
	int m, c, n;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (n = 1; n < c; n++)
	{
		a++;
	}

	for (m = 0; m < (c / 2); m++)
	{
		aux = s[m];
		s[m] = *a;
		*a = aux;
		a--;
	}
}
