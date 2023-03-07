#include "main.h"

/**
 * _memset -fill a block of memory with a specific value
 * @s: Starrting address of the memory to be filled
 * @b: The desired value
 * @n: The number of bytes to be changed
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
