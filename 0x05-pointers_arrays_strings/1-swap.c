#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: An integer to be swapped
  * @b: Another integer to  be swapped
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
