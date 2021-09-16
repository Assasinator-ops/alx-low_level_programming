#include "holberton.h"
/**
 * print_alphabet - prints alphabet
 */
void print_alphabet(void)
{
    for(int i='A';i<'z';i++)
    {
        i = tolower(i);
        _putchar(i);
        _putchar('\n');
    }
}
