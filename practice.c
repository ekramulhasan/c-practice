#include <stdio.h>
int main()

{
  double celsius,farenheit;

      printf("Enter the temperature in celsius:");
      scanf("%lf",&farenheit);

      //farenheit = (1.8 *celsius)+32;
        celsius = (farenheit-32*5)/9;


      printf("Temperature in farenheit is %.2lf\n",celsius);


    return 0;
}
