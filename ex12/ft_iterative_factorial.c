#include <stdio.h>

int ft_iterative_factorial(int nb);

/* int main(void)
{
  printf("ft_iterative_factorial(1): %d\n", ft_iterative_factorial(1));
  printf("ft_iterative_factorial(2): %d\n", ft_iterative_factorial(2));
  printf("ft_iterative_factorial(3): %d\n", ft_iterative_factorial(3));
  printf("ft_iterative_factorial(4): %d\n", ft_iterative_factorial(4));
  printf("ft_iterative_factorial(5): %d\n", ft_iterative_factorial(5));
  printf("ft_iterative_factorial(6): %d\n", ft_iterative_factorial(6));
  printf("ft_iterative_factorial(7): %d\n", ft_iterative_factorial(7));
} */

int ft_iterative_factorial(int nb)
{
  int total;
  if (nb < 0)
    return 0;

  total = 1;
  while (nb > 1)
  {
    total *= nb;
    nb--;
  }
  return total;
}