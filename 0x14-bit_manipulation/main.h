#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
void print_binary(unsigned long int n);
int get_endianness(void);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int _pow_recursion(int x, int y);
int _strlen_recursion(const char *s);

#endif
