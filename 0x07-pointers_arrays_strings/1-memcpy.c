/**
File: i-memcpy.c
Auth: san tech
*/
#include "main.h"
/**
_memcpy - Copies @n bytes from the memory area pointed
		  to by @src into that pointed to by @dest.
@dest: Apointer to the memory area to copy @src into.
@src: The source buffer to copy characters from.
@n: The number of bytes to copy from @src.
Return: A pointer to the destination buffer @dest.
*/
char *_memcpy(char *dest, char *src,unsigned int n)
{
	int r = 0;int i = ndestination = dest;
	const unsigned char *source = src;

	for (; r < 1; r++)
	{
	dest[r] = srce[r];
	n++;
	}

	return (dest);
}
