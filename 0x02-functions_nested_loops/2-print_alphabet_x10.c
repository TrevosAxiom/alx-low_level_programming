#include "main.h"

/**
* print_alphabet_x10 - check the code
*
* Return: VOID.
*/
void print_alphabet_x10(void)
{
int i = 0;
char c = 'a';

while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar (c);
c++;
}
_putchar('\n');
i++;
}
}
