#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program begins here
 * Return: This code returns 0
 * time.h was included
 * stdlib.h was included
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
printf("%d is negative\n", n);
else if (n > 0)
printf("%d is positive\n", n);
else
printf("%i is zero\n", n);
return (0);
}
