#include <stdio.h>
//1.prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
 printf("Temperature Converter \n");
 printf(" 1.Celsius to Fanhrenheit \n");
 printf(" 2. Fanhrenheit to Celsius \n");
 printf("Enter your option: ");
 int user_response;
 scanf("%d",&user_response);

 if(user_response == 1){
    //3.call
    c_to_f();
 } else if(user_response ==2){
    f_to_c();
 }  else{
    printf("Invalid option \n");
 }
 
}


//2.define
void c_to_f(void){
    float Celsius;
    printf("Enter the celsius: ");
    scanf( "%f", &Celsius);
    float Fanhrenheit = (Celsius * 1.8)+32;
    printf("%.2f°C = %.2f°F\n",Celsius,Fanhrenheit);
}

void f_to_c(void){
    float f;
    printf("Enter the Fanhrenheit: ");
    scanf( "%f", &f);
    float c = (f - 32)/ 1.8;
    printf("%.2f°C = %.2f°F\n",f ,c);
}
