#include "main.h"

void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < size; i++)
    {
        for (j = size - i; j > 1; j--)
        {
            _putchar(' ');
        }

        for (j = 0; j <= i; j++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}

