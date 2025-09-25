
int printft_arg(const char *format, va_list args)
{
  if (*format == 'c')
    return (printft_putchar(va_arg(args, int)));
  else if (*format == 's')
    return (printft_putstr(va_arg(args, char *)));
  else if (*format == 'd' || *format == 'i')
    return (printft_putnbr(va_arg(args, int)));
  else if (*format == 'u')
    return (printft_putunbr(va_arg(args, unsigned int)));
  else if (*format == 'x')
    return (printft_puthex(va_arg(args, unsigned int), 0));
  else if (*format == 'X')
    return (printft_puthex(va_arg(args, unsigned int), 1));
  else if (*format == 'p')
    return (printft_putptr(va_arg(args, void *)));
  else if (*format == '%')
    return (printft_putchar('%'));
  return (0);
}
