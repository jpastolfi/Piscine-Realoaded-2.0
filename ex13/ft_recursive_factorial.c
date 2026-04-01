#include <stdio.h>

int ft_recursive_factorial(int nb);

/* int main(void)
{
  printf("ft_recursive_factorial(-3): %d\n", ft_recursive_factorial(-3));
  printf("ft_recursive_factorial(0): %d\n", ft_recursive_factorial(0));
  printf("ft_recursive_factorial(1): %d\n", ft_recursive_factorial(1));
  printf("ft_recursive_factorial(2): %d\n", ft_recursive_factorial(2));
  printf("ft_recursive_factorial(3): %d\n", ft_recursive_factorial(3));
  printf("ft_recursive_factorial(4): %d\n", ft_recursive_factorial(4));
  printf("ft_recursive_factorial(5): %d\n", ft_recursive_factorial(5));
} */

int ft_recursive_factorial(int nb)
{
  if (nb < 0)
  {
    return 0;
  }
  else if (nb <= 1)
  {
    return 1;
  }
  else
  {
    return (nb * ft_recursive_factorial(nb - 1));
  }
}