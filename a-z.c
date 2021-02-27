#include <stdio.h>

int main(void)
{
    char i;

    printf("Enter the character: ");
    scanf("%c",&i);

    if(i>='A' && i<='Z'){

        printf("This is capital letter: %c",i);
    }

    else if(i>='a' && i<='z'){
        printf("This is small letter: %c",i);
    }

    return 0;


}
