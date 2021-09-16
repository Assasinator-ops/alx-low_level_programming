#include "main.h"
/**
 * print_alphabet - prints alphabet
 */
void print_alphabet(void)
{
    int i;
    for(i='A';i<'z';i++)
    {
        i = tolower(i);
        _putchar(i);
        _putchar('\n');
    }
}
