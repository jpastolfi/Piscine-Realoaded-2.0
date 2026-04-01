#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
  printf("ft_sqrt(9): %d\n", ft_sqrt(9));
  printf("ft_sqrt(10): %d\n", ft_sqrt(10));
  printf("ft_sqrt(49): %d\n", ft_sqrt(49));
  printf("ft_sqrt(-49): %d\n", ft_sqrt(-49));
}

int ft_sqrt(int nb)
{
  int current;
  if (nb <= 0)
  {
    return (0);
  }
  current = 1;
  while (current < nb)
  {
    if (current * current == nb)
    {
      return (current);
    }
    current++;
  }
  return (0);
}