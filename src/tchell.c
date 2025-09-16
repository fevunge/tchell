#include "tchell.h"

void tch_loop(void)
{
  char c;
  while (1)
  {
    printf("tchell >");
    scanf(" %c", &c);
  }
}
