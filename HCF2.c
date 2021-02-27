#include <stdio.h>

int main(void)
{
    int a,b,x,hcf;

    printf("Enter the two number: ");
    scanf("%d%d",&a,&b);

    if(a<b){
        x = a;
    }

    else{
        x =b;
    }

    for(;x>=1;x--){

        if(a%x == 0 && b%x ==0){
            hcf = x;
            break;
        }
    }

    printf("HCF:%d",hcf);

    return 0;
}
