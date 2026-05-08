#include <stdio.h>

int main(void)
{
    float Celsius;
    printf("Enter the celsius: ");
    scanf( "%f", &Celsius);
    float Fanhrenheit = (Celsius * 1.8)+32;
    printf("%.2f°C = %.2f°F\n",Celsius,Fanhrenheit);

    if(Celsius<0){
        printf("❄️ Freezing weather");
    } else if (Celsius <10){
        printf("🥶 Very cold weather");
    }  else if(Celsius <20){
        printf("🧥 Chilly weather");
    }  else if(Celsius <30){
        printf("🖼️ Normal weather");
    }  else if(Celsius <40){
        printf("☀️ Hot weather");
       }   else {
            printf("🔥 Very hot weather");
    }
}
