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
		putchar(j);
		j++;
	}
	j = 'A';

	while (j <= 'Z')
	{
		putchar (j);
		j++;
	}
	putchar('\n');
	return (0);
}
