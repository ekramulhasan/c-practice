#include <stdio.h>

struct record{
        char name[10];
        char number[15];
        char email[17];

};
int main()

{
   struct record a[2];
   int i;

   for(i=0;i<2;i++)
   {
        printf("Enter the name:");
        scanf("%s",a[i].name);

        printf("Enter the number:");
        scanf("%s",a[i].number);

        printf("Enter the email:");
        scanf("%s",a[i].email);

   }


   for(i=0;i<2;i++)
   {
       printf("name: %s, number: %s, email: %s\n",a[i].name,a[i].number,a[i].email);
   }



   return 0;
}
