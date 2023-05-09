#include "main.h"

char *_memset(char *str, char c, unsigned int n)
{
	while (n--)
		*(str + n) = c;
	return (str);
}
