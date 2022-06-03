#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Main Declaration
 * Return: 0
 * Description: prints all single digit numbers of base 10
 */
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
{
putchar('0' + digit);
if (digit != 9)
{
putchar (',');
putchar (' ');
}
}

putchar ('\n');

return (0);
}
