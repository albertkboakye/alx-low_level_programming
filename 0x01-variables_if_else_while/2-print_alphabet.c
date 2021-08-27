#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry
 * Description: Using putchar to display small alphabets 
 * Return: returns 0 when everything works fine
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
