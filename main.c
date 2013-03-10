#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include<math.h>
#include"lib.h"

static  void myprintf(char *str, ...)
{
  va_list arg;
  va_start(arg, str);
  vprintf(str, arg);
  va_end(arg);
}

int main(int argc, char *argv[])
{
  char hello[] = "ici EPITECH";
  myprintf("Ceci est un test");
  myprintf("\n");
  myprintf("%d * %d = %d\n", 3, 5, 3 * 5);
  printfloat("En float sinus de 90degres: %f\n",sin((90*3.14159)/180));
  myprintf("\n");
  printfloat("test pourcentage: %%");
  myprintf("\n");
  myprintf("%s\n", hello);
    return 0;
}
