#include "holberton.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
    for(int i='A';i<'z';i++)
    {
        i = tolower(i);
        putchar(i);
        putchar('\n');
    }
}
