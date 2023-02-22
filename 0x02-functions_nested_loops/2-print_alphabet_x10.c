#include "main.h"

/**
 * print_alphabet_x10 -> print the alphabet in lowercase
 */

void print_alphabet_x10(void);
{
	int j;
	int x;

	for (j = 0; j < 10; j++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
