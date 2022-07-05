#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: return 0
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
