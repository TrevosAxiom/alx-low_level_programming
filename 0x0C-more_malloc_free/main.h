#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char c);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
void *malloc_checked(unsigned int b);
unsigned int _strlen(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);

#endif
