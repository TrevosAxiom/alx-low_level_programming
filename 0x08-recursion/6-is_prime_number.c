#include "main.h"
#include <stdio.h>
/**
* is_prime_number - check if n is a prime number
* @n: int
* Return: 0 or 1
*/


int is_prime_number(int n)
{
return (prime_checker(n, 2));
}

/**
* prime_checker - check all number < n if they can divide it
* @n: int
* @resp: int
* Return: int
*/

int prime_checker(int n, int resp)
{

if (resp >= n && n > 1)
return (1);
else if (n % resp == 0 || n <= 1)
return (0);
else
return (prime_checker(n, resp + 1));
}
