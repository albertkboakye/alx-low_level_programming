#include "main.h"
/**
 *main - Entry point
 *
 *Description: prints holberton on new line
 *
 *Return: return 0 (success)
 *
 */
int main(void)
{
	char c[10] = "_putchar";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');
	return (0);
}
