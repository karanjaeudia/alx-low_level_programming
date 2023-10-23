/* 0-memset.c */

#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: A pointer to the memory area to be filled.
 * @b: The desired value to set.
 * @n: The number of bytes to be changed.
 *
 * Return: A pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
