#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		if (j != 'e' && j != 'q')
		{
			putchar(j);
		}
		j++;
	}
	putchar('\n');
	return (0);
}
