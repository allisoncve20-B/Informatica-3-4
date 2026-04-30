#include <stdio.h>

int main(void)
{
    float Fahrenheit;
    printf("Enter the Fahrenheit:");
    scanf("%f", &Fahrenheit);
    float Celsius = (Fahrenheit-32)/1.8;
    printf("%.2f°F = %.f°C\n",Fahrenheit,Celsius);
    //Fahrenheit and Celsius are equal in the temperature -40

}
