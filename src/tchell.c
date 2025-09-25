#include "tchell.h"
#include <string.h>
#include "./get_next_line/get_next_line.h"

void tch_loop(void)
{
  char *input;

  while (1)
  {
    write(1, "tcsh !.. ", 9);
    input = get_next_line(0);
    write(1, input, strlen(input));
  }
}
