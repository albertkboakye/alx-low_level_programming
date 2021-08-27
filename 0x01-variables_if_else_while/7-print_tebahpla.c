#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main entry
 * Description: prints the lowercase alphabet in reverse, followed by a new line
 * Return: 0
 */
int main(void)
{
	char m = 'z';

	while (m >= 'a')
	{
		putchar(m);
		m--;
	}

	putchar('\n');
	return (0);
}
