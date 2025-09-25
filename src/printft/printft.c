
int printft(const char *format, ...)
{
  va_list args;
  va_start(args, format);

  while (*format)
  {
    if (*format == '%')
    {
      format++;
      if (strincludec("csdiuxXp%", *format))
      {
        format++;
        printft_arg(format, args);
      }
      else
        write(1, format - 1, 1);
    }
    else
      write(1, format, 1);
    format++;
  }
  va_end(args);
  return (0);
}
