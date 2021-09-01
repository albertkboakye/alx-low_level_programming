#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*Description: The function uses loop to operate
*Return: no return
*/
void print_alphabet_x10(void)
{
int i = 0;
int n;
while (i++ <= 9)
{
for (n = 'a'; n <= 'z'; n++)
_putchar(n);

_putchar(10);
}
}
