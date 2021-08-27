#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Using putchar to display small alphabets
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
