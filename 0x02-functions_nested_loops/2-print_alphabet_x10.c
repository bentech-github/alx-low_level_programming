#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * Return: return 0 always
 */
void print_alphabet_x10(void)
{
	int x, co;

	co = 0;

	while (co < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		co++;
		_putchar('\n');
	}
}
