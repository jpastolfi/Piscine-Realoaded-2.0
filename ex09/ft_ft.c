#include <stdio.h>

void ft_ft(int *nbr);

/* int main(void)
{
  int n = 0;
  ft_ft(&n);
} */

void ft_ft(int *nbr)
{
  printf("Antes: %i\n", *nbr);
  *nbr = 42;
  printf("Depois: %i\n", *nbr);
}