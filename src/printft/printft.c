int printft(const char *format, ...)
{
  va_list args;
  va_start(args, format);

  while (*format)
  {
    write(1, format, 1);

    format++;
  }
  va_end(args);
  return (0);
}
