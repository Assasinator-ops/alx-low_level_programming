#include "holberton.h"

/**
 * _isdigit - checks if int c is a digit
 * @c: integer c
 * Return: 1 if true or 2 if false
 */
int _isdigit(int c)
{
	return (c >= 48 && c < 58);
}
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
