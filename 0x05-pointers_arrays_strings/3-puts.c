#include <stdio.h>
#include "main.h"

/**
 * _puts - prints just like printf
 * @str: collect the system or user input
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
