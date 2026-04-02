#include <stdio.h>

int ft_strlen(char *str);

/* int main(void)
{
  printf("ft_strlen('Teste'): %d\n", ft_strlen("Teste"));
  printf("ft_strlen('Testando'): %d\n", ft_strlen("Testando"));
} */

int ft_strlen(char *str)
{
  int index;

  index = 0;
  while (str[index] != '\0')
  {
    index++;
  }
  return (index);
}