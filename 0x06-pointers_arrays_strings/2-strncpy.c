#include "main.h"
/**
 * *_strncpy - copies the string pointed to by src
 * @dest: pointer to the buffer
 * @src: pointer source
 * @n: number of bytes
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}