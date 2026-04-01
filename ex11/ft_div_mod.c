#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

/* int main(void)
{
  int a = 10;
  int b = 3;
  int c;
  int d;
  ft_div_mod(a, b, &c, &d);
} */

/* This function divides parameters a by b and stores the result in the int pointed by
div. It also stores the remainder of the division of a by b in the int pointed by mod. */
void ft_div_mod(int a, int b, int *div, int *mod)
{
  int result;
  int remainder;
  result = a / b;
  remainder = a % b;
  *div = result;
  *mod = remainder;
  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("*div: %d\n", *div);
  printf("*mod: %d\n", *mod);
}