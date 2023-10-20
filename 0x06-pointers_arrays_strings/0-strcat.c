#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 * @dest: - pointer to string destination
 * @src: - pointer to be attached
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int SI = 0;
	int D = 0;

	while (dest[D] != '\0')
	{
		D++;
	}
	while (src[SI] != '\0')
	{
		dest[D] = src[SI];
		D++;
		SI++;
	}
	dest[D] = '\0';

	return (dest);
}
