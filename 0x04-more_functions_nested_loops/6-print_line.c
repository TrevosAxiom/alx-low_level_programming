#include "main.h"

/**
* print_line - check for a digit
* @n : number of _ to be printed
* Return:void
*/

void print_line(int n)
{

int i;

for (i = 0; i < n && n > 0; i++)
{
_putchar('_');
}
_putchar('\n');

}
