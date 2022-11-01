#include "main.h"

/**
 *_memset: Fills the memory with constant bytes.
 *@s: memory area
 *@b: bytes
 *@n: number of bytes7
 *
*Return: ponlinter to s
*/

char *_memset(char *s, char b, unsigned int n)

{
	char *ptr = s;

	while (n-- > 0)

	*ptr++ = b;
	return (s);
}
