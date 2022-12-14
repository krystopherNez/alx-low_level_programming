#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @b: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int b)
{
	if (b >= 'a' && b <= 'z')
		return (1);
	else
		return (0);
}
