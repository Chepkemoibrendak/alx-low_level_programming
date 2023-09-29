#include "main.h"
/**
 * _isupper - checks if uppercase letters
 * @c: char to check
 *
 * Return: if uppercase returns to be 1,else returns to be 0
 */
int _isupper(int c)
{      
        if (c >= 'A' && c <= 'z')
                return (1);
        return (0);
}      
