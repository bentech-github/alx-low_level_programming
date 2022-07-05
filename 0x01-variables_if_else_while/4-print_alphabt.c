#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all alphabeth except q and e
 *
 * Return: return 0
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');
	return (0);
}
