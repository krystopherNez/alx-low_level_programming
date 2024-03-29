#include "function_pointers.h"

/**
 * print_name - print a name.
 * @name: The name to print.
 * @f: A pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	f(name);
}
