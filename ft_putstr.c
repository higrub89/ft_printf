#include "ft_printf.h"

void ft_putstr(char *s)
{
  int i;

  i = 0;
  while (!s[i])
    return;
  while (s[i] != '\0')
  {
    ft_putchar(s[i]);
    i++;
  }
}