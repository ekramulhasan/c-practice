#include <stdio.h>

int main()

{
    int ascii;

    for(ascii=0;ascii<256;ascii++)
    {
        printf("ascii value of %c = %d\n",ascii,ascii);
    }

    return 0;
}

