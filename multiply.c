#include <stdio.h>
#include <string.h>

int main(void)
{
   char x[30]="bangla";
   char y[30]="desh";
   char i[80];

   strcat(x,y);

   printf("%s",strcat(x));

    return 0;

}
