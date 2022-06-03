#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Main Declaration
 * Return: 0
 * Description: program that prints the alphabet in Reverse.
 */
int main(void)
{
int lcase;

for (lcase = 'z'; lcase >= 'a'; lcase--)
{
putchar (lcase);
}

putchar ('\n');

return (0);
}
