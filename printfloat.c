#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include<math.h>
#include"lib.h"
void printfloat(char *str, ...)
{
  float f;
  int i,taille;
  va_list ap;
  i = 0;
  va_start(ap,str);
  taille=my_strlen(str);
  while(i<taille)
    {
      if(str[i] !='%')
        {
          my_putchar(str[i]);
        }
      else
        {
          i++;
          if(str[i]=='f')
            {
              f=(float)va_arg(ap,double);
              printf("%f",f);
            }
          else
            my_putchar(str[i]);
        }
      i++;
    }
}
