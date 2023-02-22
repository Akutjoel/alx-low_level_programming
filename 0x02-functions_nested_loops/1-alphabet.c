#include "main.h"
/**
 * main - to print lower case alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchat('\n');
}
