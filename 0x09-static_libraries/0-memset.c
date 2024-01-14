#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_memset - a program that fills memory with constant byte.
*@n: memory area  pointed of bytes from @s
*@b: memory area of the  pointer
*@s: constant byte @b
*Return: pointer to memory area of @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
	s[x] = b;
	x++;
	}
	return (s);
}
