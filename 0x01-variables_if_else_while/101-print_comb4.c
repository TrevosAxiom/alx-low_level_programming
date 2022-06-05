#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Main Entrance
 * Description: Program that prints all possible diff combo of 3 digits
 * Return: 0 value
 */
int main(void)
{
int h = 0, i, j;

while (h < 10)
{
i = 0;
while (i < 10)
{
j = 0;
while (j < 10)
{
if (j != i && i != h && j > i && i > h)
{
putchar('0' + h);
putchar('0' + i);
putchar('0' + j);
if (h + i + j != 24)
{
putchar(',');
putchar(' ');
}
}
j++;
}
i++;
}
h++;
}
putchar('\n');

return (0);

}
