#include "main.h"

/**
* print_square - check for a digit
* @n : number of _ to be printed
* Return:void
*/

void print_square(int n)
{

int i = 0, num;

while (i < n && n > 0)
{
num = 0;
while (num < n)
{
_putchar('#');
num++;
}

_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');

}
