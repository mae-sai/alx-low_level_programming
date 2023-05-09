#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @str: pointer to the memory area
 * @c: constant byte
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area
 */
char *_memset(char *str, char c, unsigned int n)
{
	while (n--)
		*(str + n) = c;
	return (str);
}
