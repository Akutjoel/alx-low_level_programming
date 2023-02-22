#include "main.h"
/**
 * print_alphabet_x10 - print a to z upto ten times
 *
 * Return: 0 always
 */

void print_alphabet_x10(void)
{
	char alpha;
	int tens;

	for (tens = 1; tens <= 10; tens++)
	{
		for (alpha = 'a' alpha <= 'z' alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
