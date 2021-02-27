#include <stdio.h>
#include <string.h>

int main(void)
{
    char x[30]="BANGLADESH";
    char y[30]="BANGLADESH";

    int i= strcmp(x,y);

    printf("%d",i);


    return 0;
}
