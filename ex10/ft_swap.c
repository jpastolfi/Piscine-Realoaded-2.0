#include <stdio.h>

void ft_swap(int *a, int *b);

/* int main(void)
{
  int a = 0;
  int b = 3;
  ft_swap(&a, &b);
} */

void ft_swap(int *a, int *b)
{
  printf("a antes: %i\n", *a);
  printf("b antes: %i\n", *b);
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  printf("a depois: %i\n", *a);
  printf("b depois: %i\n", *b);
}