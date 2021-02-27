#include <stdio.h>

struct record{
        char name[10];
        char number[15];
        char email[17];

};
int main()

{
   struct record a,b;

   printf("Enter the name:");
   scanf("%s",&a.name);

   printf("Enter the number:");
   scanf("%s",&a.number);

   printf("Enter the email:");
   scanf("%s",&a.email);

   b=a;

   printf("name: %s, number: %s, email: %s\n",b.name,b.number,b.email);

   return 0;
}
