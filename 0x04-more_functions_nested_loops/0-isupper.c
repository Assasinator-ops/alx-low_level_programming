#include "holberton.h"

/**
 * _isupper - checks if input is an uppercase letter in ASCII
 * @c: integer to check
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	return (c >= 65 && c <= 90);
}
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
