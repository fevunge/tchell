
int strincludec(const char *str, char c)
{
  while (*str)
  {
    if (c == *str)
      return (1);
  }
  if (c == *str)
    return (1);
  return (0);
}
