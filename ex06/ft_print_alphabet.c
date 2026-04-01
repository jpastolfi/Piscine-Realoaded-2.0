void ft_print_alphabet(void);

/* int main(void)
{
  ft_print_alphabet();
} */

void ft_print_alphabet(void)
{
  char c;

  c = 'a';
  while (c <= 'z')
  {
    ft_putchar(c);
    c++;
  }
}