#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10
 *
 * Return: return 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
