#include <stdio.h>
#include <string.h>
int main()
{
    char a[50]="bangladesh";
    char b[50];

    strcpy(b,a);

    printf("value of a =%s\n",a);
    printf("value of b =%s\n",b);

    return 0;
}
