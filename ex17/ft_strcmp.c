#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
  printf("ft_strcmp(\"Teste\", \"Teste\"): %d\n", ft_strcmp("Teste", "Zeste"));
}

int ft_strcmp(char *s1, char *s2)
{
  int index;

  index = 0;
  while (s1[index] == s2[index] && s1[index] != '\0')
  {
    index++;
  }
  return (s1[index] - s2[index]);
}