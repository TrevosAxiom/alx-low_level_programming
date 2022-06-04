#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Main Entrance
 * Description: Program that prints all possible diff combo of 2 digits
 * Return: 0 value
 */
int main(void)
{
int i, j;

while (i < 10)
{
j = 0;
while (j < 10)
{
if (j > i)
{
putchar('0' + i);
putchar('0' + j);
if (i + j < 17)
{
putchar(',');
putchar(' ');
}
}
j++;
}
i++;
}
putchar('\n');

return (0);

}
