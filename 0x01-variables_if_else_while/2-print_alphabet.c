#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print alphabeth
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
	putchar('\n');
	return (0);
}

