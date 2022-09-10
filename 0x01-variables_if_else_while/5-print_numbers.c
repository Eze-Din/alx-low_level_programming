#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char j = '0';

	while (j <= '9')
	{
		putchar(j);
		j++;
	}

	putchar('\n');
	return (0);
}
