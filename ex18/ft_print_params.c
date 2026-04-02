#include <stdio.h>

int main(int argc, char **argv)
{
  int counter;

  counter = 1;
  while (counter < argc)
  {
    ft_putchar(argv[counter]);
  }
}