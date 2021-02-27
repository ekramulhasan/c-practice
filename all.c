#include <stdio.h>

int main(void)

{
    int x,i;

    printf("Enter the number: ");
    scanf("%d",&x);

    for(i=2;i<x;i++){

        if(x%i == 0){
            printf("it's not prime numer");
            break;
        }

        else{
            printf("it's prime number");
            break;
        }
    }




    return 0;
}
