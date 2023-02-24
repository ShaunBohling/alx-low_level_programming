#include "main"

/**
 * print diagona -> printing line
 * @n: integer params
 */
void prints_diogonal(int n)
{
	int x, 1;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i <= x; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

