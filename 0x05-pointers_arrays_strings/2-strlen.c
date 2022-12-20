#include "main.h"

/**
  * _strlen - Returns length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int y = 0;

	for (; *s != '\0'; s++)
	{
		y++;
	}

	return (y);
}
