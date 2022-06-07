#include "main.h"
/**
* print_last_digit - check the code
* @n: argument
* Return: VOID.
*/
int print_last_digit(int n)
{
int mod;
if (n >= 0)
{
mod = n % 10;
}
else
{
mod = (n % 10) * -1;
}
_putchar('0' + mod);
return (mod);
}
