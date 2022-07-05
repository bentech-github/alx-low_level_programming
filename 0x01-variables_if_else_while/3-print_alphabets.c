#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print lower and upper case
 *
 * Return: return 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (low = 'A'; low <= 'Z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
